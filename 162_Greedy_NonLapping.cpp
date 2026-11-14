#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int eraseOverlapIntervals(vector<vector<int>> intervals)
{
    sort(intervals.begin(), intervals.end(),
         [](const vector<int> &a, const vector<int> &b)
         {
             return a[1] < b[1];
         });

    int removed = 0, lastEnd = INT_MIN;
    for (auto &in : intervals)
    {
        if (in[0] < lastEnd)
            removed++; // overlaps with last kept, remove it
        else
            lastEnd = in[1]; // keep it
    }
    return removed;
}

int main()
{
    cout << eraseOverlapIntervals({{1, 2}, {2, 3}, {3, 4}, {1, 3}}) << endl;         // 1
    cout << eraseOverlapIntervals({{1, 3}, {1, 4}, {3, 5}, {3, 4}, {4, 5}}) << endl; // 2
}