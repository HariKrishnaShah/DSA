#include <iostream>
#include <vector>
using namespace std;



int search(vector<int> &nums, int target)
{
    if(nums.size()<1)
    {
        return -1;
    }
    int left = 0;
    int right = nums.size()-1;
    int answer = -1;
    while(left<=right)
    {
        int mid = left+(right-left)/2;
        if(nums[mid] == target)
        {
            return mid;
        }

        if(nums[mid]<target)
        {
            left = mid+1;
        }
        else if(nums[mid]>target)
        {
            right = mid-1;
        }
    }
    return -1; 
}


int main()
{
    vector<int> arr = {-1,0,3};
    int target = 3;
    cout<<"The target "<<target<<" is at "<<search(arr, target)<<endl;

}