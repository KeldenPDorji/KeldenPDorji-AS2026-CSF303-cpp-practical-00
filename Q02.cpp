#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Store student number as integer (leading zero is dropped)
    int studentNumber = 2230285;
    string studentNumberStr = "02230285";

    // Compute digit sum
    int temp = studentNumber;
    int digitSum = 0;
    // Include the leading zero manually
    digitSum += 0; // leading digit
    temp = 2230285;
    while (temp > 0)
    {
        digitSum += temp % 10;
        temp /= 10;
    }

    // Odd or even
    string oddEven = (studentNumber % 2 == 0) ? "Even" : "Odd";

    // Remainder when divided by 7
    int remainder = studentNumber % 7;

    // Multiplied by 3
    long long multiplied = (long long)studentNumber * 3;

    // Display results
    cout << "Student Number : " << studentNumberStr << endl;
    cout << "Digit Sum      : " << digitSum << endl;
    cout << "Odd / Even     : " << oddEven << endl;
    cout << "Remainder (% 7): " << remainder << endl;
    cout << "Multiplied by 3: " << multiplied << endl;

    return 0;
}
