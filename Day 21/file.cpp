#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream hello;
    char ch;
    int i = 0;
    string line;
    hello.open("gill.txt", ios::in);
    while (hello)
    {
        // getline(hello, line);
        ch = hello.get();
        cout << ch << endl;
        if(ch == '\n') {
            cout << " New Line " << endl;
            continue;
        }
        i++;
        if (hello.eof())
        {
            break;
        }
    }

    cout<< "Count : " << i <<endl;
    hello.close();

    
    return 0;
}