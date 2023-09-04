#include <iostream>
#include <typeinfo>
using namespace std;

int main(int argc, char const *argv[])
{
    int int_var = 23;
    cout << "Integer variable: " << int_var << endl;
    cout << "Type of int_var: " << typeid(int_var).name();
    return 0;
}

