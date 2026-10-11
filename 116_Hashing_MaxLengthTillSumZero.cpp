#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int maxLen(vector<int> &nums)
{
    int longestSubArray = 0;
    unordered_map<int, int> visitedElement;
    int sum = 0;
    for(int i =0; i<nums.size(); i++)
    {
      sum += nums[i];
      if(sum == 0)
      {
        longestSubArray = i+1;
      }
      auto answer = visitedElement.find(sum);
    if(answer !=visitedElement.end())
    {
        if((i - answer->second)>longestSubArray)
        {
            longestSubArray = i - answer->second;
        }
    }
      visitedElement.insert({sum, i});
    }

   

   return longestSubArray;

}

int main()

{
    vector<int> arr = {2, -2, 3};
    cout<<"The longest subarry to sum "<<0<<" is "<<maxLen(arr)<<endl;


}