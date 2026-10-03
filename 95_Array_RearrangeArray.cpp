#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums)
{
    int left = 0;
    int right = nums.size()-1;
    int firstPositiveIndex = 0;
    int firstPositiveNumber = 0;

    while(nums[firstPositiveIndex]<0)
    {
        firstPositiveIndex++;
    }
    firstPositiveNumber = nums[firstPositiveIndex];
    for(int i =firstPositiveIndex; i>0; i--)
    {
        nums[i] = nums[i-1];
    }
    nums[0] = firstPositiveNumber;

    for(int i = 1; i<right; i++)
    {
        if(i%2 ==1 && nums[i] >0)
        {
            int currentFixIndex = i+1;
            while(currentFixIndex<=right && nums[currentFixIndex] >0)
            {
                currentFixIndex++;
            }
            if(currentFixIndex<=right)
            {
                int currentFixNumber = nums[currentFixIndex];
                for(int z = currentFixIndex; z>i; z--)
                {
                    nums[z] = nums[z-1];
                }
                nums[i] = currentFixNumber;
            }
        }
        else if(i%2 ==0 && nums[i] <0)
        {
            int currentFixIndex = i+1;
            while(currentFixIndex<=right && nums[currentFixIndex] <0)
            {
                currentFixIndex++;
            }
            if(currentFixIndex<=right)
            {
                int currentFixNumber = nums[currentFixIndex];
                for(int z = currentFixIndex; z>i; z--)
                {
                    nums[z] = nums[z-1];
                }
                nums[i] = currentFixNumber;
            }
        }
    }


    return nums;
}

int main()
{
    vector<int> arr = {-8, -3, 2, 4};
    for(int x: rearrangeArray(arr))
    {
        cout<<x<<" ";
    }
    cout<<endl;
}