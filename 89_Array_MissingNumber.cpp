#include <iostream>
#include <vector>
#include <set>
using namespace std;

int missingNumber(vector<int>& nums)
{
    set<int> s;
    for(int i =0; i<nums.size(); i++)
    {
        s.insert(nums[i]);
    }
    for(int i = 0; i<=nums.size(); i++)
    {
        if(s.find(i) == s.end())
        {
            return i;
        }
    }
   
}

int main()
{
    vector<int> nums = {0, 2, 3, 1, 4};
    cout<<"Missing Number is : "<<missingNumber(nums)<<endl;

}