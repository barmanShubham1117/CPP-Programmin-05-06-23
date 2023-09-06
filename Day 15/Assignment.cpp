#include <iostream>
#include <string>
using namespace std;

int main()
{
    int emply_no;
    string emply_first_name;
    string emply_last_name;
    string emply_DOB;
    cout << "ENTER EMPLOYEE NO : " << endl;
    cin >> emply_no;
    cout << " ENTER EMPLOYEE FIRST NAME: ";
    cin.ignore();
    getline(cin, emply_first_name); 
    emply_first_name[0] = toupper(emply_first_name[0]);

    cout << " ENTER EMPLOYEE LAST NAME: ";
    getline(cin, emply_last_name);
    emply_last_name[0] = toupper(emply_last_name[0]);

    cout << "ENTER DATE OF BIRTH :";
    int day;
    int month;
    int year;
    cin >> day >> month >> year;
    cout << " EMPLOYEE INFORMATION :" << emply_no << endl;
    cout << " FULL NAME: " << emply_first_name << " " << emply_last_name << endl;
    int age;
    int current_year = 2023;
    age = current_year - year;
    cout << " EMPLOYEE'S AGE: " << age << endl;
    return 0;
}