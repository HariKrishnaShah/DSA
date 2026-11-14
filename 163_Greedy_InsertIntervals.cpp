#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> insertInterval(vector<vector<int>> &intervals, vector<int> newInterval)
{
    vector<vector<int>> res;
    int i = 0, n = intervals.size();

    // 1. entirely before newInterval
    while (i < n && intervals[i][1] < newInterval[0])
        res.push_back(intervals[i++]);

    // 2. overlapping with newInterval
    while (i < n && intervals[i][0] <= newInterval[1])
    {
        newInterval[0] = min(newInterval[0], intervals[i][0]);
        newInterval[1] = max(newInterval[1], intervals[i][1]);
        i++;
    }
    res.push_back(newInterval);

    // 3. entirely after
    while (i < n)
        res.push_back(intervals[i++]);

    return res;
}

int main()
{
    vector<vector<int>> a = {{1, 3}, {6, 9}};
    vector<vector<int>> b = {{1, 2}, {3, 5}, {6, 7}, {8, 10}};

    for (auto &v : insertInterval(a, {2, 5}))
        cout << "[" << v[0] << "," << v[1] << "] ";
    cout << endl; // [1,5] [6,9]

    for (auto &v : insertInterval(b, {4, 8}))
        cout << "[" << v[0] << "," << v[1] << "] ";
    cout << endl; // [1,2] [3,10]
}