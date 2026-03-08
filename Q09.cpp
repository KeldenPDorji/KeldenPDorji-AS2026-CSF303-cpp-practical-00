#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;

int main()
{
    vector<int> v02230285;

    // Prompt user to enter 6 values
    cout << "Enter 6 values: ";
    for (int i = 0; i < 6; i++)
    {
        int val;
        cin >> val;
        v02230285.push_back(val);
    }

    // Display original
    cout << "Original : ";
    for (int i = 0; i < v02230285.size(); i++)
    {
        cout << v02230285[i];
        if (i < v02230285.size() - 1)
            cout << " ";
    }
    cout << endl;

    // Sort ascending
    sort(v02230285.begin(), v02230285.end());

    // Display sorted
    cout << "Sorted   : ";
    for (int i = 0; i < v02230285.size(); i++)
    {
        cout << v02230285[i];
        if (i < v02230285.size() - 1)
            cout << " ";
    }
    cout << endl;

    // Min, Max, Sum
    int minVal = *min_element(v02230285.begin(), v02230285.end());
    int maxVal = *max_element(v02230285.begin(), v02230285.end());
    int sum = accumulate(v02230285.begin(), v02230285.end(), 0);
    double average = (double)sum / v02230285.size();

    cout << "Min      : " << minVal << endl;
    cout << "Max      : " << maxVal << endl;
    cout << "Sum      : " << sum << endl;
    cout << fixed << setprecision(2);
    cout << "Average  : " << average << endl;

    // Remove values below average
    vector<int> filtered;
    for (int i = 0; i < v02230285.size(); i++)
    {
        if (v02230285[i] >= average)
        {
            filtered.push_back(v02230285[i]);
        }
    }

    cout << "After removing below average:" << endl;
    for (int i = 0; i < filtered.size(); i++)
    {
        cout << filtered[i];
        if (i < filtered.size() - 1)
            cout << " ";
    }
    cout << endl;

    return 0;
}
