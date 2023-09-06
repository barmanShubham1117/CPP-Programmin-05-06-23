#include<iostream>
using namespace std;

// function declaration
int myFunc(int m, string str);

int main(int argc, char const *argv[])
{
    int i = 34;
    string age = " You're 22 now.";

    // function calling
    cout << myFunc(i, age);
    return 0;
}

// function definition
int myFunc(int m, string str) {
    cout<<"Hello Bhavya..!"<< str << " " << m << endl;
    return 99;
}

ASSIGNMENT: WAP a program to demostrate 1. Call by value
                                        2. Call by reference