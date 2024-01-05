#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int a, c;
    char b;

    cout << "Enter value for a: ";
    cin >> a;
    cout << "\nEnter value for b: ";
    cin >> b;

    try
    {
        if (b == 0)
        {
            throw b;
        }
        if (b == 'o')
        {
            throw b;
        }
        
        c = a/b;
        cout << "\nResult: " << c << endl;
    }
    catch(int i)
    {
        cout << "Value 0 for b is not allowed.";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        cout << "char value for b is not allowed.";
    }
    
    
    return 0;
}