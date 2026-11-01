#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &nums, int target, int left, int right)
{
    if(left>right)
    {
        return -1;
    }
    int mid = left+(right-left)/2;

    if(nums[mid] == target)
    {
        return mid;
    }

    if(nums[mid]<target)
    {
        return binarySearch(nums, target, mid+1, right);
    }
    else if(nums[mid]>target)
    {
        return binarySearch(nums, target, left, mid-1);
    }

}

int search(vector<int> &nums, int target)
{
    if(nums.size()<1)
    {
        return -1;
    }
    return binarySearch(nums, target, 0, nums.size()-1);
     
}


int main()
{
    vector<int> arr = {-1,0,3};
    int target = 3;
    cout<<"The target "<<target<<" is at "<<search(arr, target)<<endl;

}