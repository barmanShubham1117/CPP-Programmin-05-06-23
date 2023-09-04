#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {10, 20, 30, 40, 50}, num;
    bool found = false;
    cout<<"Enter a number: ";
    cin>>num;

    for (int i = 0; i < (sizeof(arr)/sizeof(int)); i++)
    {
        if (arr[i] == num)
        {
            cout<<"\nNumber found it the array, at index "<<i<<endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout<<"\nGiven number is not present the array."<<endl;
    }
    
    return 0;
}
