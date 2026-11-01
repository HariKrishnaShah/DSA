#include <iostream>
#include <vector>
using namespace std;



int lowerBound(vector<int> &nums, int target)
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
            right = mid-1;
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
    vector<int> arr = {58210,52968,57654,84387};
    int target = 89401;
    cout<<"The lower bound of "<<target<<" is at "<<lowerBound(arr, target)<<endl;

}