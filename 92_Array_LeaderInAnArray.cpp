#include <iostream>
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums)
{
    vector<int> result;
    int left = 0;
    int right = nums.size()-1;

    for(int i=left; i<right; i++)
    {
        bool isMajority = true;
        for(int j = i+1; j<=right; j++)
        {
            if(nums[j]>nums[i])
            {
                isMajority = false;
                break;
            }
        }
        if(isMajority)
        {
            result.push_back(nums[i]);
        }

    }
    result.push_back(nums[right]);
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