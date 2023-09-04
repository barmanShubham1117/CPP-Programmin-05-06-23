#include<iostream>
#include<conio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    // WAP to find the smallest no.
/*    
    int a,b;

    cout<<"Enter value of 'a': ";
    cin>>a;
    cout<<"Enter value of 'b': ";
    cin>>b;

    if (a<b)
    {
        cout<< a <<" is the smallest no."<<endl;
    }
    else if (a==b)
    {
        cout<<"Value of 'a' and 'b' are equal."<<endl;
    }
    else
    {
        cout<< b <<" is the smallest no."<<endl;
    }
*/    

    // WAP to find the day, according to the given user number.
    int count;
    cout<<"Enter day count: ";
    cin>>count;

    switch (count)
    {
    case 1:
        cout<<"Hello, it's Monday."<<endl;
        break;

    case 2:
        cout<<"Hello, it's Tuesday."<<endl;
        break;

    case 3:
        cout<<"Hello, it's Wednesday."<<endl;
        break;

    case 4:
        cout<<"Hello, it's Thursday."<<endl;
        break;

    case 5:
        cout<<"Hello, it's Friday."<<endl;
        break;

    case 6:
        cout<<"Hello, it's Saturday."<<endl;
        break;

    case 7:
        cout<<"Hello, it's Sunday."<<endl;
        break;
    
    default:
        cout<<"Hello, that's not a correct decision."<<endl;
        break;
    }

    getche();
    // getch();
    return 0;
}