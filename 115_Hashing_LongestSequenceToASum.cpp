#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subarraySum(vector<int>& nums, int k)
{
    int count = 0, sum = 0;
    unordered_map<int, int> freq;
    freq[0] = 1; // empty prefix

    for (int x : nums)
    {
        sum += x;

        auto it = freq.find(sum - k);
        if (it != freq.end())
            count += it->second; // add frequency, not 1

        freq[sum]++;
    }

    return count;
}

int main()
{
    vector<int> arr = {-5,-3,0,-9,-6,1,5,-7,-1,0,3,5};
    int k = 0;

    cout << "The count of subarray with sum "
         << k << " is " << subarraySum(arr, k) << endl;
}