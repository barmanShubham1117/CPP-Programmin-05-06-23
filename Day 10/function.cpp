#include <iostream>
#include <conio.h>
using namespace std;

// function declaration
void bhavya(string str, int i);

int main(int argc, char const *argv[])
{
    string kon_hai = "Hum hai aur ";
    int extra = 1;
    bhavya(kon_hai, extra);   // function calling
}

// function defination
void bhavya(string str, int i) {
    cout<<"Aapke piche koi hai..!! "<<str<<i;
}