#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstName = "Kelden";
    string fullName = "Kelden Phuntsho Dorji";
    int studentNumber = 2230285;

    int firstNameLen = firstName.length();
    int fullNameLen = fullName.length();
    int lastDigit = studentNumber % 10;

    // Part 1: Print first name N times (N = length of first name)
    cout << "Name repeated (" << firstNameLen << " times):" << endl;
    for (int i = 0; i < firstNameLen; i++)
    {
        cout << firstName << endl;
    }

    cout << endl;

    // Part 2: Right-angled triangle with height = full name length
    cout << "Triangle (height = " << fullNameLen << "):" << endl;
    for (int i = 1; i <= fullNameLen; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    // Part 3: Multiplication table for last digit of student number
    cout << "Times Table for " << lastDigit << " (last digit of 0" << studentNumber << "):" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << lastDigit << " x " << i << " = " << lastDigit * i << endl;
    }

    return 0;
}
