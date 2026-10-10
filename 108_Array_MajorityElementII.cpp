#include <iostream>
#include <vector>
using namespace std;



vector<int> majorityElementTwo(vector<int>& nums)
{
    int candidate1 = 0;
    int candidate2 = 0;
    int count1 = 0;
    int count2 = 0;

    vector<int> result;
    for(int i = 0; i<nums.size(); i++)
    {
        if(nums[i] == candidate1)
        {
            count1++;
        }
        else if(nums[i] == candidate2)
        {
            count2++;
        }
        else if(count1 == 0)
        {
            candidate1 = nums[i];
            count1 = 1;
        }
        else if(count2 == 0)
        {
            candidate2 = nums[i];
            count2 = 1;
        }
        else
        {
            count1--;
            count2--;
        }
    }

    //Verify Candidate Count
    count1 = 0;
    count2 = 0;
    for(int x: nums)
    {
        if(x==candidate1)
        {
            count1++;
        }
        else if(x == candidate2)
        {
            candidate2++;
        }
    }

    if(count1>(nums.size())/3)
    {
        result.push_back(candidate1);
    }
    if(count2>(nums.size())/3)
    {
        result.push_back(candidate2);
    }
    return result;
        
}

int main()
{
    vector<int> arr = {1, 2, 1, 1, 3, 2};

    for(int x: majorityElementTwo(arr))
    {
        cout<<x<<" ";
    }
    cout<<endl;

}