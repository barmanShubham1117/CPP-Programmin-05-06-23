#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num, temp1, temp2, nDigits=0, sum = 0;
    cout << "Enter a number : " << endl;
    cin >> num;
    temp1 = num;
    temp2 = num;

    while (temp1 != 0)
    {
        temp1 = temp1 / 10;
        nDigits++;
    }

    while (temp2 != 0)
    {
        int digit = temp2 % 10;
        int power = round(pow(digit, nDigits));     //124.99999
        sum = sum + power;
        temp2 = temp2 / 10;
    }

    if (sum == num)
    {
        cout << "IT IS A ARMSTRONG NUMBER." << endl;
    }
    else
    {
        cout << "IT IS NOT A ARMSTRONG NUMBER." << endl;
    }
}
//     int n = 0, original, sum = 0, t, k;
//     cout << " Enter a number : " << endl;
//     cin >> original;
//     t = original;
//     k = original;
//     while (t != 0)
//     {
//         t = t / 10;
//         n++;
//     }
//     while (original != 0)
//     {
//         cout<<"Original: "<<original<<endl;
//         int m = original % 10;
//         cout<<"M: "<<m<<endl;
//         int power = pow(m,n);
//         cout<<"Power: "<<power<<endl;
//         sum = sum + power;
//         cout<<"Sum: "<<sum<<endl;
//         original = original / 10;
//     }
    // cout<<sum;
    // if (sum == k)
    // {
    //     cout << "IT IS A ARMSTRONG NUMBER." << endl;
    // }
    // else
    // {
    //     cout << " IT IS NOT A ARMSTRONG NUMBER." << endl;
    // }
    // return 0;
// }