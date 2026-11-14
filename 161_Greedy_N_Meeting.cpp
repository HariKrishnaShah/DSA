#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxMeetings(vector<vector<int>> meetings)
{
    sort(meetings.begin(), meetings.end(),
         [](const vector<int> &a, const vector<int> &b)
         {
             return a[1] < b[1];
         });

    int count = 0, lastEnd = INT_MIN;
    for (auto &m : meetings)
    {
        if (m[0] >= lastEnd)
        {
            count++;
            lastEnd = m[1];
        }
    }
    return count;
}

int main()
{
    vector<vector<int>> meetings = {{1, 10}, {2, 3}, {3, 8}, {8, 9}};
    cout << "Max Meetings is " << maxMeetings(meetings) << endl;
}