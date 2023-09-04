#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Declaration and initialization of array
    int abc[6] = {10, 20, 30, 40, 50, 60};

    cout<<"Total size of array: "<<sizeof(abc)<<endl;
    cout<<"Size of an integer: "<<sizeof(int)<<endl;
    cout<<"Number of elements in the array: "<<sizeof(abc)/sizeof(int)<<endl;
    // fetching values from an array
    for (int i = 0; i < (sizeof(abc)/sizeof(int)); i++)
    {
        cout<<"Value at index "<<i<<": "<<abc[i]<<endl;
    }

    for (int i = 0; i < (sizeof(abc)/sizeof(int)); i++)
    {
        cout<<"Enter a number at index "<<i<<": "<<endl;
        cin>>abc[i];
    }

    // fetching values from an array
    for (int i = 0; i < (sizeof(abc)/sizeof(int)); i++)
    {
        cout<<"Value at index "<<i<<": "<<abc[i]<<endl;
    }
    
    
    return 0;
}
