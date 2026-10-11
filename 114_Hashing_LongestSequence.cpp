#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;


int longestConsecutive(vector<int>& nums)
{
    int longest = 1;
    
    unordered_set<int> s;

    for(int i = 0; i<nums.size(); i++)
    {
        s.insert(nums[i]);
    }

    for(int i = 0; i<nums.size(); i++)
    {
        int currentLongest = 1;
        int current = nums[i];
        if(s.find(current -1) != s.end())
        {
            continue;
        }
        while(s.find(current+1) !=s.end())
        {
            currentLongest++;
            current++;
        }
        if(currentLongest>longest)
        {
            longest = currentLongest;
        }

    }
    return longest;
        
}
int main()
{
    vector<int> arr = {100, 4, 200, 1, 3, 2};

    cout<<"The longest consequtive sequence is "<<longestConsecutive(arr)<<endl;

}