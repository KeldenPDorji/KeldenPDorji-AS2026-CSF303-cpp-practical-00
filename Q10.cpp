#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

class Student
{
private:
    string name;
    int studentNumber;
    vector<float> marks;

public:
    // Parameterised constructor
    Student(string n, int sn)
    {
        name = n;
        studentNumber = sn;
    }

    // Add a mark
    void addMark(float m)
    {
        marks.push_back(m);
    }

    // Get average mark
    float getAverage()
    {
        if (marks.empty())
            return 0;
        float sum = 0;
        for (int i = 0; i < marks.size(); i++)
        {
            sum += marks[i];
        }
        return sum / marks.size();
    }

    // Get highest mark
    float getHighest()
    {
        if (marks.empty())
            return 0;
        float highest = marks[0];
        for (int i = 1; i < marks.size(); i++)
        {
            if (marks[i] > highest)
                highest = marks[i];
        }
        return highest;
    }

    // Get lowest mark
    float getLowest()
    {
        if (marks.empty())
            return 0;
        float lowest = marks[0];
        for (int i = 1; i < marks.size(); i++)
        {
            if (marks[i] < lowest)
                lowest = marks[i];
        }
        return lowest;
    }

    // Print full academic report
    void printReport()
    {
        float avg = getAverage();

        // Classification based on average
        string classification;
        if (avg >= 75)
            classification = "Distinction";
        else if (avg >= 60)
            classification = "Merit";
        else if (avg >= 40)
            classification = "Pass";
        else
            classification = "Fail";

        cout << "================================================" << endl;
        cout << "ACADEMIC REPORT" << endl;
        cout << "================================================" << endl;
        cout << "Student Name   : " << name << endl;
        cout << "Student No     : 0" << studentNumber << endl;
        cout << "Marks Entered  : " << marks.size() << endl;

        cout << "Marks          : ";
        for (int i = 0; i < marks.size(); i++)
        {
            cout << (int)marks[i];
            if (i < marks.size() - 1)
                cout << " ";
        }
        cout << endl;

        cout << fixed << setprecision(2);
        cout << "Average        : " << avg << endl;
        cout << "Highest        : " << (int)getHighest() << endl;
        cout << "Lowest         : " << (int)getLowest() << endl;
        cout << "Classification : " << classification << endl;
        cout << "================================================" << endl;
    }
};

int main()
{
    // Instantiate using own name and student number
    Student student("Kelden Phuntsho Dorji", 2230285);

    // Add 5 marks
    student.addMark(88);
    student.addMark(76);
    student.addMark(91);
    student.addMark(65);
    student.addMark(83);

    // Print the academic report
    student.printReport();

    return 0;
}
