#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& nums)
{
    vector<int> result;
    int left = 0;
    int right = nums.size()-1;
    int highest = nums[right];
    result.push_back(nums[right]);
    for(int i = right-1; i>=0; i--)
    {
        if(nums[i]>highest)
        {
            highest = nums[i];
            result.push_back(nums[i]);
        }
    }
    reverse(result.begin(), result.end());
    
    return result;
}


int main()
{
    vector<int> arr = {1, 2, 5, 3, 1, 2};
    cout<<"Leader in the array are: "<<endl;
    for(auto x: leaders(arr))
    {
         cout<<x<<" ";
    }
    cout<<endl;

}