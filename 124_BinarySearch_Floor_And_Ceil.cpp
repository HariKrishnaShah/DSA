#include <iostream>
#include <vector>
using namespace std;



vector<int> getFloorAndCeil(vector<int> &nums, int target)
{
    int floor = -1;
    int ceil = -1;
    if(nums.size()<1)
    {
        return {floor, ceil};
    }
    int left = 0;
    int right = nums.size()-1;
    while(left<=right)
    {
        int mid = left+(right-left)/2;
        if(nums[mid] == target)
        {
            floor = nums[mid];
            ceil = nums[mid];
            break;
        }
        else if(nums[mid]>target)
        {
            ceil = nums[mid];
            right = mid-1;
        }
         else if(nums[mid]<target)
        {
            floor = nums[mid];
            left = mid+1;
        }
        
    }
     return {floor, ceil};
}


int main()
{
    vector<int> arr = {3, 4, 4, 7, 8, 10};
    int target = 5;
    vector<int> result = getFloorAndCeil(arr, target);
    cout<<"The floor is "<<result[0]<<" and ceil is "<<result[1]<<endl;

}