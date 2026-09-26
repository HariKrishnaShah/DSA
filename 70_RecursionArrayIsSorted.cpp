#include <iostream>
using namespace std;

bool isSortedArray(vector<int>& nums, int current=0)
{
    if(current == nums.size()-1)
    {
        return true;
    }
    if(nums[current]>nums[current+1])
    {
        return false;
    }
    return isSortedArray(nums, current+1);
    
}


bool isSorted(vector<int>& nums)
{			
		return isSortedArray(nums);
           
}


int main()
{
    vector<int> arr = {1,2,3,4,5,6};
    cout<<"Is array sorted: "<<isSorted(arr)<<endl;


}