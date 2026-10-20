#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subarraysWithXorK(vector<int>& nums, int k)
{
    int count = 0, xr = 0;
    unordered_map<int, int> freq;
    freq[0] = 1; // empty prefix

    for (int x : nums)
    {
        xr ^= x;

        auto it = freq.find(xr ^ k);
        if (it != freq.end())
            count += it->second;

        freq[xr]++;
    }

    return count;
}

int main()
{
    vector<int> a = {4, 2, 2, 6, 4};
    vector<int> b = {5, 6, 7, 8, 9};

    cout << subarraysWithXorK(a, 6) << endl; // 4
    cout << subarraysWithXorK(b, 5) << endl; // 2
}