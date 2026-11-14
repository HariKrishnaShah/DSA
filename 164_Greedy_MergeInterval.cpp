#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>> intervals)
{
    sort(intervals.begin(), intervals.end()); // by start (then end)

    vector<vector<int>> res;
    for (auto &in : intervals)
    {
        if (!res.empty() && in[0] <= res.back()[1])
            res.back()[1] = max(res.back()[1], in[1]); // merge
        else
            res.push_back(in);
    }
    return res;
}

int main()
{
    for (auto &v : mergeIntervals({{1, 3}, {2, 6}, {8, 10}, {15, 18}}))
        cout << "[" << v[0] << "," << v[1] << "] ";
    cout << endl; // [1,6] [8,10] [15,18]

    for (auto &v : mergeIntervals({{1, 4}, {4, 5}}))
        cout << "[" << v[0] << "," << v[1] << "] ";
    cout << endl; // [1,5]
}