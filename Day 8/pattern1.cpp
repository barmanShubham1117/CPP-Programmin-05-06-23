// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<" Enter no. of rows: "<<endl;
//     cin>>n;
//     for(int i=n;i>0;i--){    //i<=n/ i<n
//         for(int j= 0;j<i;j++){   //j<=i;j<i;j<=(i-1)
//             cout<<"*";
//         }cout<<"\n";
//     }
//     for(int i=1;i<=n;i++){
//         for (int j=0;j<=i;j++){
//             cout<<"*";
//         }cout<<endl;
//     }
//     return 0;
// }


#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // system("cls");

    for (int i = 0; i <= 8; i++) // no of rows
    {
        if (i < 4)
        {
            for (int j = 1; j <= (5-i); j++) // no. of columns
            {
                cout<<"* ";
            }
            cout<<endl;
        }
        else if (i == 4) {
            cout<<"* "<<endl;
        }
        else
        {
            for (int j = 0; j <= (i-4); j++) // no. of columns
            {
                cout<<"* ";
            }
            cout<<endl;
        }
        
    }
}