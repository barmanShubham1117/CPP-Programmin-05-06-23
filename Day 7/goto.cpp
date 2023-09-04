#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // int i = 0;
    // hell:
    //     cout << "Hello: " << i << endl;
    //     i++;
    //     if (i < 10)
    //     {
    //         goto hell;
    //     }

    cout << "Hello" << endl;
    goto heaven;
    cout << "Hell to paar ho gya." << endl;
    heaven:
        cout << "Heaven aa gya." << endl;
}