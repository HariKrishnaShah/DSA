#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> JobScheduling(vector<vector<int>> &Jobs)
{
    // Sort jobs by profit in descending order
    sort(Jobs.begin(), Jobs.end(),
         [](vector<int> &a, vector<int> &b)
         {
             return a[2] > b[2];
         });

    int maxDeadline = 0;

    for (auto &job : Jobs)
    {
        maxDeadline = max(maxDeadline, job[1]);
    }

    vector<int> slots(maxDeadline + 1, -1);

    int count = 0;
    int totalProfit = 0;

    for (auto &job : Jobs)
    {
        int id = job[0];
        int deadline = job[1];
        int profit = job[2];

        for (int j = deadline; j >= 1; j--)
        {
            if (slots[j] == -1)
            {
                slots[j] = id;
                count++;
                totalProfit += profit;
                break;
            }
        }
    }

    return {count, totalProfit};
}

int main()
{
    vector<vector<int>> Jobs = {
        {1, 4, 20},
        {2, 1, 10},
        {3, 1, 40},
        {4, 1, 30}};

    vector<int> ans = JobScheduling(Jobs);

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}