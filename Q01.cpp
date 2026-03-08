#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declaring variables
    string fullName = "Kelden Phuntsho Dorji";
    string studentNumber = "02230285"; // Leading zero preserved as string

    // Output formatted student profile
    cout << "=============================" << endl;
    cout << "Student Profile" << endl;
    cout << "=============================" << endl;
    cout << "Name : " << fullName << endl;
    cout << "Student No : " << studentNumber << endl;
    cout << "Course : BE Software Engineering" << endl;
    cout << "=============================" << endl;

    return 0;
}
