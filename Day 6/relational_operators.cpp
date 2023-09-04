#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //0 -> false, 1 -> true

    int a = 10, b = 20, c = 10;
    cout<<(a>b)<<endl;     //0
    cout<<(a<b)<<endl;     //1
    cout<<(a>=b)<<endl;        //0
    cout<<(a<=b)<<endl;        //1
    cout<<(a==b)<<endl;        //0
    cout<<(a!=b)<<endl;        //1
    cout<<(a==c)<<endl;        //1
    cout<<(a!=c)<<endl;        //0

    // cout<<((a>=c) && (b>=c))<<endl;      //use of logical operator
    return 0;
}
