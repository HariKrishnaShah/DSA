
#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int> &nums)
{
    int left = 0;
    int right = nums.size() - 1;

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        // Ensure mid is even
        if (mid % 2 == 1)
        {
            mid--;
        }

        if (nums[mid] == nums[mid + 1])
        {
            // Pair is intact, single element is on right
            left = mid + 2;
        }
        else
        {
            // Pair is broken, single element is on left
            right = mid;
        }
    }

    return nums[left];
}

int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};

    cout << "Single element: " << singleNonDuplicate(arr) << endl;

    return 0;
}
