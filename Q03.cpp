#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string fullName = "Kelden Phuntsho Dorji";

    // Total character count including spaces
    int totalLength = fullName.length();

    // Uppercase
    string upper = fullName;
    for (int i = 0; i < upper.length(); i++)
    {
        upper[i] = toupper(upper[i]);
    }

    // Lowercase
    string lower = fullName;
    for (int i = 0; i < lower.length(); i++)
    {
        lower[i] = tolower(lower[i]);
    }

    // Initials: first character of each word
    string initials = "";
    for (int i = 0; i < fullName.length(); i++)
    {
        if (i == 0 || fullName[i - 1] == ' ')
        {
            if (initials.length() > 0)
            {
                initials += ".";
            }
            initials += toupper(fullName[i]);
        }
    }
    initials += ".";

    // First name length
    string firstName = "";
    for (int i = 0; i < fullName.length(); i++)
    {
        if (fullName[i] == ' ')
            break;
        firstName += fullName[i];
    }
    int firstNameLen = firstName.length();

    // Display results
    cout << "Full Name      : " << fullName << endl;
    cout << "Total Length   : " << totalLength << endl;
    cout << "Uppercase      : " << upper << endl;
    cout << "Lowercase      : " << lower << endl;
    cout << "Initials       : " << initials << endl;
    cout << "First Name Len : " << firstNameLen << endl;

    return 0;
}
