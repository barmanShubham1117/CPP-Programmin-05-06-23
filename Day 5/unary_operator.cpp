#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10;
    cout << a << endl;      //10
    cout << a++ << endl;    //10
    cout << ++a << endl;    //11    //lost challenge(12)

    cout << a-- << endl;    //12
    cout << --a << endl;    //10

    int m = 65;
    m+=2;                   // m = m + 2
    cout << m;


    return 0;
}
