#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    string line;
    fstream file;
    file.open("hww.txt", ios::out|ios::in);
    line = "hello everyone.";
    file << line;
    while (file)
    {
        getline(file, line);
        cout << line << endl;
        if (file.eof())
        {
            break;
        }
    }
    file.close();
    return 0;
}