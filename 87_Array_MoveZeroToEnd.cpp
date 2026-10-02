#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums)
{
    int left = 0;
    int right = nums.size()-1;

    while(left<right)
    {
        if(nums[left] == 0)
        {
            while(right>left && nums[right] == 0)
            {
                right--;
            }
            if(left<right)
            {
                for(int i = left; i<right; i++)
                {
                    nums[i] = nums[i+1];
                }
                nums[right] = 0;
                right--;
            }  
            
        }
        else
        {
             left++;
        }
    }

}

int main()
{
    vector<int> nums = {0, 0, 0, 1, 3, -2};
    moveZeroes(nums);
    for(auto x: nums)
    {
        cout<<x<<" ";
    }
    cout<<endl;

}