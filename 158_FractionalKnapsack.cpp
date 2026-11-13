
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

double fractionalKnapsack(vector<long long> &val,
                          vector<long long> &wt,
                          long long capacity)
{
    int n = val.size();

    vector<pair<double, int>> items;

    for (int i = 0; i < n; i++)
    {
        double ratio = (double)val[i] / wt[i];
        items.push_back({ratio, i});
    }

    // Sort by value/weight ratio in descending order
    sort(items.rbegin(), items.rend());

    double totalValue = 0.0;

    for (int i = 0; i < n; i++)
    {
        int index = items[i].second;

        if (wt[index] <= capacity)
        {
            totalValue += val[index];
            capacity -= wt[index];
        }
        else
        {
            totalValue += items[i].first * capacity;
            break;
        }
    }

    return totalValue;
}

int main()
{
    vector<long long> val = {60, 100, 120};
    vector<long long> wt = {10, 20, 30};

    long long capacity = 50;

    cout << fixed << setprecision(6)
         << fractionalKnapsack(val, wt, capacity) << endl;

    return 0;
}
