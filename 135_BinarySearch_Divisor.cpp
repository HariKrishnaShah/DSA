#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int smallestDivisor(vector<int> &nums, int limit)
{
    int left = 1;
    int right = *max_element(nums.begin(), nums.end());

    int answer = right;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        int sum = 0;

        for (int num : nums)
        {
            sum += (num + mid - 1) / mid;
        }

        if (sum <= limit)
        {
            answer = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return answer;
}

int main()
{
    vector<int> nums = {8, 4, 2, 3};
    int limit = 4;

    int result = smallestDivisor(nums, limit);

    cout << "Smallest Divisor: " << result << endl;

    return 0;
}