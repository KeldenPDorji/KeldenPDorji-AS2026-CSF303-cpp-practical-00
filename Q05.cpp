#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fullName = "Kelden Phuntsho Dorji";
    string firstName = "Kelden";
    string studentNumber = "02230285";
    int mark;

    // Prompt for mark
    cout << "Enter mark: ";
    cin >> mark;

    // Input validation
    if (mark < 0 || mark > 100)
    {
        cout << "Error: Mark must be between 0 and 100." << endl;
        return 1;
    }

    // Grade classification
    string grade;
    string result;
    if (mark >= 75)
    {
        grade = "Distinction";
        result = "Congratulations, " + firstName + "! You have passed.";
    }
    else if (mark >= 60)
    {
        grade = "Merit";
        result = "Congratulations, " + firstName + "! You have passed.";
    }
    else if (mark >= 40)
    {
        grade = "Pass";
        result = "Congratulations, " + firstName + "! You have passed.";
    }
    else
    {
        grade = "Fail";
        result = "Sorry, " + firstName + ". You have not passed.";
    }

    // Display result
    cout << "----------------------------------------" << endl;
    cout << "Student  : " << fullName << " (" << studentNumber << ")" << endl;
    cout << "Mark     : " << mark << endl;
    cout << "Grade    : " << grade << endl;
    cout << "Result   : " << result << endl;
    cout << "----------------------------------------" << endl;

    return 0;
}
