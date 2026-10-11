#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProduct(vector<int>& nums)
{
    if (nums.empty())
    {
        return -1;
    }

    int currentMax = nums[0];
    int currentMin = nums[0];
    int maxValue = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] < 0)
        {
            swap(currentMax, currentMin);
        }

        currentMax = max(nums[i], nums[i] * currentMax);
        currentMin = min(nums[i], nums[i] * currentMin);

        maxValue = max(maxValue, currentMax);
    }

    return maxValue;
}

int main()
{
    vector<int> arr = {0, -2, -3, 6, 1};

    cout << "Max Product is " << maxProduct(arr) << endl;

    return 0;
}