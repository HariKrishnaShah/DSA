#include <iostream>
#include <vector>
#include <algorithm>>
using namespace std;

void sortZeroOneTwo(vector<int>& nums)
{
    int left = 0;
    int mid = 0;
    int high = nums.size()-1;

    while(mid<=high)
    {
        if(nums[mid] == 0)
        {
            swap(nums[mid], nums[left]);
            left++;
            mid++;
        }
        else if(nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
        
}
int main()
{
    vector<int> nums = {1, 0, 2, 1, 0};

    sortZeroOneTwo(nums);

    for (int x : nums)
    {
        cout << x << " ";
    }
    cout<<endl;

    return 0;
}