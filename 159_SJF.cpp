#include <iostream>
#include <vector>
using namespace std;

long long solve(vector<int> &bt)
{
    int sum = 0;
    int granSum = 0;

    for (int i = 1; i < bt.size(); i++)
    {
        sum = sum + bt[i - 1];
        granSum = granSum + sum;
    }
    return granSum / bt.size();
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    cout << "The average is " << solve(arr) << endl;
}