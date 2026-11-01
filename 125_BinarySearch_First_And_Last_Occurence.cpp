#include <iostream>
#include <vector>
using namespace std;



vector<int> searchRange(vector<int> &nums, int target)
{
    int start = -1;
    int end = -1;
    if(nums.size()<1)
    {
       return {-1, -1};
    }
    int left = 0;
    int right = nums.size()-1;
    int answer = nums.size();

    // to find start
    while(left<=right)
    {
        int mid = left+(right-left)/2;
        if(nums[mid] == target)
        {
           start = mid;
            right = mid-1;
        }
        else if(nums[mid]>target)
        {

            right = mid-1;
        }
         else if(nums[mid]<target)
        {
            left = mid+1;
        }
        
    }
    left = 0;
    right = nums.size()-1;

    //to find end
    while(left<=right)
    {
        int mid = left+(right-left)/2;
        if(nums[mid] == target)
        {
           end = mid;
            left = mid+1;
        }
        else if(nums[mid]>target)
        {

            right = mid-1;
        }
         else if(nums[mid]<target)
        {
            left = mid+1;
        }
        
    }
    return {start, end}; 
}


int main()
{
    vector<int> arr = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> result = searchRange(arr, target);
    cout<<"The start is "<<result[0]<<" and end is "<<result[1]<<endl;

}