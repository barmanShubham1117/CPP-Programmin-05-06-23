#include<iostream>
using namespace std;

class Parent {
    private:
        int a = 10;
    protected:
        int b = 20;
    public:
        int c = 30;

        void display() {
            cout << "A : " << a << endl;
            cout << "B : " << b << endl;
            cout << "C : " << c << endl;
        }
};

class Child : private Parent {
    public:
        void show() {
            // cout << "A : " << a << endl;
            cout << "B : " << b << endl;
            cout << "C : " << c << endl;
        }
};

int main(int argc, char const *argv[])
{
    // Parent parent;
    // parent.display();

    Child child;
    child.display();
    // child.show();
    // cout << child.b;
    // cout << child.c;
    return 0;
}
