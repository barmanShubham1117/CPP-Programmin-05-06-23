// C program for implementation of insertion sort
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {20, 50, 30, 10, 40};       //10, 20, 30, 50, 40
                                            //0    1   2   3   4
    int size = sizeof(arr)/sizeof(int);

    cout<<"Before sorting: "<<endl;
    // to print elements of the array
    for (int i = 0; i < size; i++) {cout<<"Value at index "<<i<<": "<<arr[i]<<endl;}

    for (int i = 1; i < size; i++)  //i=4
    {
        int key = arr[i];   //key = 10
        int j = i-1;        //j=2


            while (j >= 0 && key < arr[j])      //10 < 20
            {
                arr[j + 1] = arr[j];        //arr[1] = 20
                j = j-1;                    //-1
            } 
            arr[j + 1] = key;   //arr[0] = 10
             
    }
    
    cout<<"After sorting: "<<endl;
    // to print elements of the array
    for (int i = 0; i < 5; i++) {cout<<"Value at index "<<i<<": "<<arr[i]<<endl;}
}