#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
    map<int, int> indexMap;
    for(int i=0; i<nums.size(); i++)
    {
        auto iterator =  indexMap.find(target - nums[i]);
        if(iterator !=indexMap.end())
        {
            return {iterator->second, i };
        }
        indexMap[nums[i]] = i;
    }    
}

int main()
{
    vector<int> nums = {1, 6, 2, 10, 3};

    for (int x : twoSum(nums, 7))
    {
        cout << x << " ";
    }
    cout<<endl;

    return 0;
}