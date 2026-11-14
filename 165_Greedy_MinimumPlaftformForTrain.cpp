#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int minPlatforms(vector<int> arr, vector<int> dep)
{
    int n = arr.size();
    vector<pair<int, int>> t(n);
    for (int i = 0; i < n; i++)
        t[i] = {arr[i], dep[i]};
    sort(t.begin(), t.end());

    priority_queue<int, vector<int>, greater<int>> pq;
    for (auto &[a, d] : t)
    {
        if (!pq.empty() && pq.top() < a)
            pq.pop(); // reuse platform
        pq.push(d);   // occupy it until d
    }
    return pq.size();
}

int main()
{
    cout << minPlatforms({900, 940, 950, 1100, 1500, 1800}, {910, 1200, 1120, 1130, 1900, 2000}) << endl; // 3
    cout << minPlatforms({900, 1100, 1235}, {1000, 1200, 1240}) << endl;                                  // 1
}