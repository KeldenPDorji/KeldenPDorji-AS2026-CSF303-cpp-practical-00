#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Function to return sum of digits
int digitSum(int n)
{
    int sum = 0;
    if (n < 0)
        n = -n;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Function to check if a number is prime
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

// Function to count vowels in a string
int countVowels(string s)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        char c = tolower(s[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            count++;
        }
    }
    return count;
}

// Function to reverse a string
string reverseString(string s)
{
    string reversed = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        reversed += s[i];
    }
    return reversed;
}

int main()
{
    string fullName = "Kelden Phuntsho Dorji";
    int studentNumber = 2230285;
    string studentNumberStr = "02230285";

    cout << "========================================" << endl;
    cout << "Function Results for " << fullName << endl;
    cout << "Student No: " << studentNumberStr << endl;
    cout << "========================================" << endl;

    // digitSum — include leading 0 manually
    int ds = digitSum(studentNumber) + 0; // leading zero contributes 0
    cout << "digitSum(" << studentNumberStr << ")            : " << ds << endl;

    // isPrime
    string primeResult = isPrime(studentNumber) ? "Yes" : "No";
    cout << "isPrime(" << studentNumberStr << ")             : " << primeResult << endl;

    // countVowels
    cout << "countVowels(" << fullName << ") : " << countVowels(fullName) << endl;

    // reverseString
    cout << "reverseString(" << fullName << "): " << reverseString(fullName) << endl;

    cout << "========================================" << endl;

    return 0;
}
