#include<iostream>
using namespace std;

class MyClass {
    public:
        // Default constructor
        MyClass() {
            cout << "Constructor has been called." << endl;
        }
        // Parameterized Constructor
        MyClass(string name) {
            cout << "Another constructor has also been called by: " << name << endl;
        }
        MyClass(string name, int age) {
            cout << "Another constructor has also been called by: " << name << ", and age is: " << age << endl;
        }
        MyClass(int age, string name) {
            cout << "Another constructor no.: 4 has also been called by: " << name << ", and age is: " << age << endl;
        }
};

int main(int argc, char const *argv[])
{
    MyClass myClass1, myClass2("Bhavya"), myClass3("Bhavya", 19), myClass4(18, "Bhavya");
    return 0;
}
