#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int longestSubarray(vector<int>& nums, int k)
{
    int longestSubArray = 0;
    unordered_map<int, int> visitedElement;
    int sum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        if (sum == k)
        {
            longestSubArray = i + 1;
        }

        auto answer = visitedElement.find(sum - k);

        if (answer != visitedElement.end())
        {
            longestSubArray = max(
                longestSubArray,
                i - answer->second
            );
        }

        visitedElement.insert({sum, i});
    }

    return longestSubArray;
}

int main()
{
    vector<int> arr = {10, 5};
    int k = 15;

    cout << "The longest subarray with sum "
         << k << " is " << longestSubarray(arr, k) << endl;
}