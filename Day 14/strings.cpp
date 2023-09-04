#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // int arr[] = {10, 20, 30};

    // H e l l o   2   W o  r  l  d \0 
    // 0 1 2 3 4 5 6 7 8 9 10 11 12 13

    // char chh[5];
    // char ch[] = "Hello 2 World";    //"""\0"""
    // string str = "Hello Bhavya, How are you?";

    // cout<<"My First String: "<<ch<<endl;
    // cout<<"My Second String: "<<str<<endl;

    string str, str2;
    // cin>>str;    //it consider white space as the end of the input

    // int a;
    // cin>>a;

    cout<<"Enter your first name: ";
    getline(cin, str);
    cout<<"\nEnter your last name: ";
    getline(cin, str2);

    cout<<"Full Name: "<<str + " " + str2<<endl;
    
    // cout<<"First Name: "<<str<<endl;
    // cout<<"Last Name: "<<str2<<endl;

    // cout<<"You entered: "<<a<<endl;
    return 0;
}
