#include <iostream>
#include <vector>
using namespace std;



int searchInsert(vector<int> &nums, int target)
{
    if(nums.size()<1)
    {
        return -1;
    }
    int left = 0;
    int right = nums.size()-1;
    int answer = nums.size();;
    while(left<=right)
    {
        int mid = left+(right-left)/2;
        if(nums[mid] == target)
        {
            answer = mid;
            return mid;
        }
        else if(nums[mid]>target)
        {
            answer = mid;
            right = mid-1;
        }
         else if(nums[mid]<target)
        {
            left = mid+1;
        }
        
    }
    return answer; 
}


int main()
{
    vector<int> arr = {1, 3, 5, 6};
    int target = 2;
    cout<<"The insert position of "<<target<<" is at "<<searchInsert(arr, target)<<endl;

}