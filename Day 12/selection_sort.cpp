// C program for implementation of selection sort
#include <iostream>
using namespace std;

// void print(int arr[]);

int main(int argc, char const *argv[])
{
    int arr[] = {20, 50, 30, 10, 40};

    cout<<"Before sorting: "<<endl;
    // print(arr);
    // to print elements of the array
    for (int i = 0; i < 5; i++)
    {
        cout<<"Value at index "<<i<<": "<<arr[i]<<endl;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout<<"After sorting: "<<endl;
    // print(arr);
    // to print elements of the array
    for (int i = 0; i < 5; i++)
    {
        cout<<"Value at index "<<i<<": "<<arr[i]<<endl;
    }

    return 0;
}

// void print(int arr[]) {
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<"Value at index "<<i<<": "<<arr[i]<<endl;
//     }
// }
