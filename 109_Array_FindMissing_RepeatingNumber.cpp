#include <iostream>
#include <vector>
#include <map>
using namespace std;


vector<int> findMissingRepeatingNumbers(vector<int> nums)
{
    int repeatedNumber;
    int missingNumber;
    vector<int> count(nums.size()+1, 0);
    for(int i = 0; i<nums.size(); i++)
    {
        count[nums[i]]++;
    }
    for(int i = 1; i<count.size(); i++)
    {
        if(count[i] == 0)
        {
            missingNumber = i;
        }
        else if(count[i] == 2)
        {
            repeatedNumber = i;
        }
    }

    return {repeatedNumber, missingNumber};
    

}

int main()
{
    vector<int> arr = {3, 5, 4, 1, 1};

    for(int x: findMissingRepeatingNumbers(arr))
    {
        cout<<x<<" ";
    }
    cout<<endl;


}