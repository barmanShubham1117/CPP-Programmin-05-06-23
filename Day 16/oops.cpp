#include<iostream>
#include<string.h>
using namespace std;

class Employee {
    // DATA MEMBERS
    int id;
    string name, dob;

    public:
    // MEMBER FUNCTIONS
    void getDetails() {
        cout << "ENTER EMPLOYEE NO : ";
        cin >> id;

        cout << "\nENTER EMPLOYEE NAME: ";
        cin.ignore();
        getline(cin, name); 

        cout << "\nENTER DATE OF BIRTH (dd-MM-YYYY):";
        getline(cin, dob);
    }

    void showDetails() {
        cout << "\nEMPLOYEE ID :" << id << endl;
        cout << "NAME: " << name << endl;
        cout << "DOB: " << dob << endl;
    }
};

class Salary {
    double baseSal;
    int totalNoOfWorkingDays, totalNoOfPresentDays, totalNoOfAbsentDays;

    public:
    void calcSal() {
        cout << "ENTER BASE SALARY : ";
        cin >> baseSal;

        cout << "\nENTER TOTAL NUMBER OF WORKING DAYS: ";
        cin >> totalNoOfWorkingDays; 
        
        cout << "\nENTER TOTAL NUMBER OF ABSENT DAYS: ";
        cin >> totalNoOfAbsentDays; 
        
        double salOfADay = baseSal / totalNoOfWorkingDays;
        totalNoOfPresentDays = totalNoOfWorkingDays - totalNoOfAbsentDays;
        double sal = salOfADay * totalNoOfPresentDays;
        
        cout << "\nTOTAL SALARY: " << sal << endl;
    }
};

int main(int argc, char const *argv[])
{
    // Employee emp1;
    // emp1.getDetails();
    // emp1.showDetails();

    Salary sal1;
    sal1.calcSal();
    return 0;
}

    