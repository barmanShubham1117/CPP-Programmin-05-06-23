#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    fstream file;
    file.open("myFile.dat", ios::binary | ios::app);
    file << "Hello World1234r23$#RT! ";
    return 0;
}
