#include <iostream>
using namespace std;

void reverseArrayHelper(vector<int>& nums, int left, int right)
{
    if(left>right)
    {
        return;
    }
    int temp = nums[left];
    nums[left] = nums[right];
    nums[right] = temp;
    return reverseArrayHelper(nums, left+1, right-1);
}


vector<int> reverseArray(vector<int>& nums)
{			
			reverseArrayHelper(nums, 0, nums.size()-1);
            return nums;
}


int main()
{
    vector<int> arr = {1,2,3,4,5};
    reverseArray(arr);
    cout<<"Reverse of array is: "<<endl;
    for(auto x:arr)
    {
        cout<<x<<endl;
    }


}