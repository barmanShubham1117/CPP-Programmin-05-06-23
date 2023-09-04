#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;
    int noOfPrimeFound = 1;
    int num = 2;

    while (noOfPrimeFound <= n) {
        bool isPrime = true;
        for (int j = 1; j < num; j++) {
            if (j==1)
                continue;
            else if ((num % j) == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout<< num << endl;
            noOfPrimeFound++;
        }
        num++;
    }
}