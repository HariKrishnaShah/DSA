
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums)
{
    vector<vector<int>> result;
    int n = nums.size();

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 3; i++)
    {
        // Skip duplicate first elements
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        for (int j = i + 1; j < n - 2; j++)
        {
            // Skip duplicate second elements
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;

            int left = j + 1;
            int right = n - 1;

            while (left < right)
            {
                long long sum = (long long)nums[i]
                              + nums[j]
                              + nums[left]
                              + nums[right];

                if (sum == 0)
                {
                    result.push_back({
                        nums[i], nums[j],
                        nums[left], nums[right]
                    });

                    left++;
                    right--;

                    // Skip duplicate third elements
                    while (left < right &&
                           nums[left] == nums[left - 1])
                        left++;

                    // Skip duplicate fourth elements
                    while (left < right &&
                           nums[right] == nums[right + 1])
                        right--;
                }
                else if (sum < 0)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
        }
    }

    return result;
}

int main()
{
    vector<int> arr = {2, -2, 0, 3, -3, 5};

    cout << "Results are:\n";

    for (auto x : fourSum(arr))
    {
        for (auto y : x)
            cout << y << " ";

        cout << endl;
    }

    return 0;
}