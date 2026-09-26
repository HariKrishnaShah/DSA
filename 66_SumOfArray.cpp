#include <iostream>
#include <vector>
using namespace std;


int arraySum(const vector<int>& nums)
{
	if(nums.empty())
        {
            return 0;
        }
        else
        {
            return (nums[0]+ arraySum(vector<int>(nums.begin()+1, nums.end())));
        }
}

int main()
{
    vector<int> arr = {1,2,3};
    cout<<"The sum is "<<arraySum(arr)<<endl;

}