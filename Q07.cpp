#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string fullName = "Kelden Phuntsho Dorji";
    string studentNumber = "02230285";

    // Declare array named using first name
    int kelden_marks[5] = {85, 72, 90, 65, 78};
    int size = 5;

    // Find highest, lowest, and compute average
    int highest = kelden_marks[0];
    int lowest = kelden_marks[0];
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += kelden_marks[i];
        if (kelden_marks[i] > highest)
            highest = kelden_marks[i];
        if (kelden_marks[i] < lowest)
            lowest = kelden_marks[i];
    }
    double average = (double)sum / size;

    // Count above average
    int aboveAvg = 0;
    for (int i = 0; i < size; i++)
    {
        if (kelden_marks[i] > average)
            aboveAvg++;
    }

    // Display
    cout << "Student: " << fullName << " | No: " << studentNumber << endl;
    cout << "------------------------------------------" << endl;
    cout << "Index  Mark   Bar" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "[" << i << "]    " << kelden_marks[i] << "     ";
        int bars = kelden_marks[i] / 10;
        for (int j = 0; j < bars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "------------------------------------------" << endl;
    cout << "Highest      : " << highest << endl;
    cout << "Lowest       : " << lowest << endl;
    cout << fixed << setprecision(2);
    cout << "Average      : " << average << endl;
    cout << "Above Average: " << aboveAvg << " mark(s)" << endl;

    return 0;
}
