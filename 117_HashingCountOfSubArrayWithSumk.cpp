#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int subarraySum(vector<int>& nums, int k)
{
    int subArrayCount = 0;
    unordered_map<int, int> visitedElement;
    int sum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        if (sum == k)
        {
            subArrayCount++;
        }

        auto answer = visitedElement.find(sum - k);

        if (answer != visitedElement.end())
        {
            subArrayCount++;
        }

        visitedElement.insert({sum, i});
    }

    return subArrayCount;
}

int main()
{
    vector<int> arr = {-5,-3,0,-9,-6,1,5,-7,-1,0,3,5,};
    int k = 0;

    cout << "The count of subarray with sum "
         << k << " is " << subarraySum(arr, k) << endl;
}