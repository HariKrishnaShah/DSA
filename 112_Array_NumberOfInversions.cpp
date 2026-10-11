
#include <iostream>
#include <vector>
using namespace std;

long long merge(vector<int>& nums, int low, int mid, int high)
{
    vector<int> temp;
    int i = low;
    int j = mid + 1;
    long long count = 0;

    while (i <= mid && j <= high)
    {
        if (nums[i] <= nums[j])
        {
            temp.push_back(nums[i]);
            i++;
        }
        else
        {
            // nums[i] > nums[j]
            temp.push_back(nums[j]);

            // Every remaining left-half element
            // forms an inversion with nums[j].
            count += mid - i + 1;

            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(nums[i]);
        i++;
    }

    while (j <= high)
    {
        temp.push_back(nums[j]);
        j++;
    }

    for (int k = low; k <= high; k++)
    {
        nums[k] = temp[k - low];
    }

    return count;
}

long long mergeSort(vector<int>& nums, int low, int high)
{
    if (low >= high)
        return 0;

    int mid = low + (high - low) / 2;

    long long count = 0;

    count += mergeSort(nums, low, mid);
    count += mergeSort(nums, mid + 1, high);
    count += merge(nums, low, mid, high);

    return count;
}

long long numberOfInversions(vector<int>& nums)
{
    return mergeSort(nums, 0, nums.size() - 1);
}

int main()
{
    vector<int> nums = {2, 3, 7, 1, 3, 5};

    cout << numberOfInversions(nums) << endl;

    return 0;
}
