<?php
include('include/connection.php');

if(isset($_POST['type']))
{
$id=$_POST['id'];
$today=date( 'Y-m-d H:i:s' );
$actiontype='withdraw~'.$id;	

if($_POST['type']=='accept'){

//payout code starts here
$curl = curl_init();
    	
$login_url = "https://api.edhaapay.in/payout/v1/login";
	
$login_headers = array(
   "Accept: application/json",
   "Content-Type: application/json",
   "MERCHANT-KEY: tn8Pr8m7",
);
	
$data_array = array(
  'merchantId' => 'JL8QLXZ6',
  'password' => '9AGE0',
);
$data = json_encode($data_array);

curl_setopt($curl, CURLOPT_URL, $login_url);
curl_setopt($curl, CURLOPT_POST, true);
curl_setopt($curl, CURLOPT_POSTFIELDS, $data);
curl_setopt($curl, CURLOPT_RETURNTRANSFER, true);
curl_setopt($curl, CURLOPT_HTTPHEADER, $login_headers);
curl_setopt($curl, CURLOPT_SSL_VERIFYPEER, false);
//curl_setopt($curl, CURLOPT_SSL_VERIFYHOST,1);

$resp = curl_exec($curl);

if($e = curl_error($curl)) {
  echo "ERROR: ".$e;
}
else {
  if($resp != null) {
  	
  	 $json_resp = json_decode($resp);
  	//print_r($json_resp);
  	//	exit;
  	$apiStatus = $json_resp->apiStatus;
  	if ($apiStatus == true) {
  		$token = $json_resp->token;

        $query=mysqli_query($con,"select `userid`,`amount` from `tbl_withdrawal` where `id`='".$id."'");
        $userResult=mysqli_fetch_array($query);
        $userid=$userResult['userid'];
        $amount=$userResult['amount'];

        $query=mysqli_query($con,"select * from `tbl_bankdetail` where `userid`='".$id."'");
        $userResult=mysqli_fetch_array($query);
        $beneficiaryName=$userResult['name'];
        $beneficiaryIfscCode=$userResult['ifsc'];
        $beneficiaryAccNo=$userResult['account'];
        $mobile=$userResult['mobile'];
        $email=$userResult['email'];
  		
  		$payout = makePayout($token, $merchantTxnId, $amount, $mobile, $email, $beneficiaryAccNo, $beneficiaryIfscCode, $beneficiaryName);        //merchantTxnId, amount, mobile
  		
  		$query = "INSERT INTO `tbl_order`(`userid`, `transactionid`, `amount`, `status`) VALUES ('".$user_id."','".$merchantTxnId."','".$amount."','0')";
  		$result = $con->query($query);
  		//print($result);
  		//exit;
  		if ($result === TRUE) {
	  		print_r($payment_url->intentData->intentUri);
	  		echo $result;
	  		header("Location: ".$payment_url->intentData->intentUri);
			exit;
  		}
  		else {
  		echo 'none';
  		}
  	}
  }
}
curl_close($curl);
   
    
//payout code ends here

$sqlA = mysqli_query($con,"Update `tbl_withdrawal` set status = '0',createdate = '".$today."' where `id`='".$id."' ");
			
$sqlAA = mysqli_query($con,"Update `tbl_walletsummery` set createdate = '".$today."' where `actiontype`='".$actiontype."' ");

			
}else if($_POST['type']=='reject') 
{
$sqlA = mysqli_query($con,"Update `tbl_withdrawal` set status = '2',createdate = '".$today."' where `id`='".$id."'");
$useridQuery=mysqli_query($con,"select `userid`,`amount` from `tbl_withdrawal` where `id`='".$id."'");
$userResult=mysqli_fetch_array($useridQuery);
$userid=$userResult['userid'];
$amount=$userResult['amount'];
$walletbalance=wallet($con,'amount',$userid);
$finalbalanceCredit=$walletbalance+$amount;	
$sqlwallet= mysqli_query($con,"UPDATE `tbl_wallet` SET `amount` = '$finalbalanceCredit' WHERE `userid`= '$userid'");	

}


}

function generateHash($hashString){
$saltkey = "t3gqcg6u39v13zxg"; 
$hash = hash_hmac('sha256', $hashString, $saltkey, true); 
$base64_hash = base64_encode($hash);
return  $base64_hash;
}
    
function makePayout($token, $merchantTxnId, $amount, $mobile, $email, $beneficiaryAccNo, $beneficiaryIfscCode, $beneficiaryName) {
$curl = curl_init();
	
$generate_url = "https://api.edhaapay.in/payout/v1/pay";
	
$merchantId = "JL8QLXZ6";
$hashString = $merchantId.$token.$merchantTxnId.$amount.$beneficiaryAccNo.$beneficiaryIfscCode;
$hash = generateHash($hashString);

$generate_headers = array(
   "Content-Type: application/json",
   "MERCHANT-KEY: tn8Pr8m7",
   "TOKEN: ".$token,
   "HASH: ".$hash,
);

$data_array = array(
  'merchantId' => 'JL8QLXZ6',
  'merchantTxnId' => $merchantTxnId,
  'address' => 'Kolkata',
  'amount' => $amount,
  'beneficiaryAccNo' => $beneficiaryAccNo,
  'beneficiaryIfscCode' => $beneficiaryIfscCode,
  'beneficiaryName' => $beneficiaryName,
  'emailAddress' => $email,
  'mobileNumber' => $mobile,
  'transferType' => 'IMPS',
  'trxnNote' => 'test txn',
);

$data = json_encode($data_array);

curl_setopt($curl, CURLOPT_URL, $generate_url);
curl_setopt($curl, CURLOPT_POST, true);
curl_setopt($curl, CURLOPT_POSTFIELDS, $data);
curl_setopt($curl, CURLOPT_RETURNTRANSFER, true);
curl_setopt($curl, CURLOPT_HTTPHEADER, $generate_headers);
curl_setopt($curl, CURLOPT_SSL_VERIFYPEER, false);

$resp = curl_exec($curl);

if($e = curl_error($curl)) {
  return "ERROR: ".$e;
}
else {
    // Transaction Successful
  return json_decode($resp);
}
curl_close($curl);
}
?>