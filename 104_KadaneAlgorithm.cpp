#include <iostream>
#include <vector>
#include <set>
using namespace std;

int maxSubArray(vector<int>& nums)
{
    int currentSum = nums[0];
    int maxSum = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main()
{
    vector<int>arr = {2, 3, 5, -2, 7, -4};
    maxSubArray(arr);
    cout<<"Max consecutive sequence is "<<maxSubArray(arr)<<endl;
}