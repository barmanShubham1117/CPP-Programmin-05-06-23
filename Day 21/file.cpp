#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    // fstream hello;
    // string line;
    // hello.open("gill.txt", ios::in);
    // while (hello)
    // {
    //     getline(hello, line);
    //     cout << line << endl;
    //     if (hello.eof())
    //     {
    //         break;
    //     }
    // }
    // hello.close();

    string str;

    // cin >> str;
    getline(cin, str);

    cout << str << endl;
    return 0;
}