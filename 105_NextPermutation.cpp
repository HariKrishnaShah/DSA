#include <iostream>
#include <vector>
#include <algorithm>
#include <algorithm>>
using namespace std;

void nextPermuation(vector<int>& nums)
{
    int n = nums.size();
    int i = n-2;
    
    //Find Pivot Element
    while(i>=0 && nums[i]>=nums[i+1])
    {
        i--;
    }
    //Find the first element in the right which is smaller than the pivot element.
    if(i>=0)
    {
    int j = n-1;
    while(nums[j]<=nums[i])
    {
        j--;
    }
    swap(nums[i], nums[j]);
    }
    reverse(nums.begin()+i+1, nums.end());
        
}
int main()
{
    vector<int> nums = {2,2,2};

    nextPermuation(nums);

    for (int x : nums)
    {
        cout << x << " ";
    }
    cout<<endl;

    return 0;
}