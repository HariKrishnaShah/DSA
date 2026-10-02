#include <iostream>
#include <vector>
#include <set>
using namespace std;

int removeDuplicates(vector<int>& nums)
{
    set<int> s;
   
    int left = 0;
    int right = nums.size()-1;
  while(left<=right)
   {
    if(s.find(nums[left]) != s.end())
    {
        for(int j = left; j<right; j++)
        {
            nums[j] = nums[j+1];
        }
        nums.pop_back();
        right--;
    }
    else
    {
        s.insert(nums[left]);
          left++;
    }
   }
   return nums.size();
}

int main()
{
    vector<int> nums = {-2, 2, 4, 4, 4, 4, 5, 5};
    cout<<"Number of Distinct elements are: "<<removeDuplicates(nums)<<endl;
    for(auto x: nums)
    {
        cout<<x<<" ";
    }
    cout<<endl;

}