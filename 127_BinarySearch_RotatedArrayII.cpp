#include <iostream>
#include <vector>
using namespace std;



bool searchInARotatedSortedArrayII(vector<int> &nums, int target)
{
    if(nums.size()<1)
    {
        return false;
    }
    int left = 0;
    int right = nums.size()-1;
    int answer = -1;
    while(left<=right)
    {
        int mid = left+(right-left)/2;
        if(nums[mid] == target)
        {
            return true;
        }

        //handle duplicate
        if(nums[left] == nums[mid] && nums[mid] == nums[right])
{
    left++;
    right--;
}
       // Left half is sorted
else if(nums[left] <= nums[mid])
{
    if(nums[left] <= target && target < nums[mid])
    {
        right = mid - 1;
    }
    else
    {
        left = mid + 1;
    }
}
// Right half is sorted
else
{
    if(nums[mid] < target && target <= nums[right])
    {
        left = mid + 1;
    }
    else
    {
        right = mid - 1;
    }
}

        
    }
    return false; 
}


int main()
{
    vector<int> arr = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    int target = 3;
    cout<<"The target "<<target<<" is present: "<<searchInARotatedSortedArrayII(arr, target)<<endl;

}