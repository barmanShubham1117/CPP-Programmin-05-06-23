#include<iostream>
using namespace std;

class Demo {
    public:
    int a = 2;
    char ch='@';

    void show();
};
void Demo::show() {
    cout<< "Hello Bhavya..!! "<< a;
}

int main(int argc, char const *argv[])
{
    Demo demo;
    demo.show();
    return 0;
}
