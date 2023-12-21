#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    // string greet = "Hello Shubham..!!";
    string greet2 = "";

    // Just for the resemblence
    // cout << greet;
    // cin >> greet;

    fstream bhavya; // Creating object for performing file handling

    // bhavya.open("temp.txt", ios::out); /* out: OUTPUT to the file */ 
    // bhavya.open("temp.txt", ios::app); /* app: APPEND to the file */ 
    // bhavya.open("temp.txt", ios::trunc); /* trunc: TRUNCATE to the file */ 

    // bhavya.open("temp.txt", ios::trunc); /* trunc: TRUNCATE to the file */ 
    // bhavya.open("temp.txt", ios::ate); /* trunc: TRUNCATE to the file */ 

    // bhavya << greet;


    bhavya.open("temp.txt", ios::in); /* in: INPUT to the file */ 
    
    // bhavya >> greet2; /* Only takes value till it encounters blank space */

    // getline(bhavya, greet2);;
    // getline(bhavya, greet2, 'o');
    // getline(bhavya, greet2); == getline(bhavya, greet2, '\n'); /* '\n' is a default delemiting character. */

    // cout << greet2;

    // Check if the file is opened or not
    while (bhavya) {
        getline(bhavya, greet2);

        cout << greet2 << endl;

        // Checking whether we have reached to the end of the file
        if (bhavya.eof()) {
            break;
        }
    }

    bhavya.close();

    return 0;
}
