#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    string studentNumber;
    int age;
    int currentYear = 2026;

    // Prompt user input
    cout << "Enter your name     : ";
    getline(cin, name);
    cout << "Enter student number : ";
    getline(cin, studentNumber);
    cout << "Enter your age       : ";
    cin >> age;

    // Calculations
    int yearOfBirth = currentYear - age;
    int yearAt100 = yearOfBirth + 100;

    // Display formatted summary
    cout << "----------------------------------------" << endl;
    cout << "Summary" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Name           : " << name << endl;
    cout << "Student No     : " << studentNumber << endl;
    cout << "Year of Birth  : " << yearOfBirth << endl;
    cout << "Year at Age 100: " << yearAt100 << endl;

    return 0;
}
