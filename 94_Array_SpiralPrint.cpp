#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> spiral(vector<vector<int>>& nums)
{
    vector<int> result;
    int m = nums[0].size()-1;
    int n = nums.size()-1;
    int top[] = {0,0};
    int right[] = {0, m};
    int bottom[] = {n,m};
    int left[] = {n,0};
    int goal[] = {1,0};

    for(int i = top[1]; i<=right[1]; i++)
    {
        result.push_back(nums[top[0]][i]);
    }

    for(int i =right[0]+1; i<=bottom[0];i++)
    {
        result.push_back(nums[i][bottom[1]]);
    }

    for(int i=bottom[1]-1; i>=left[1]; i--)
    {
        result.push_back(nums[i][bottom[0]]);
    }

    for(int i=bottom[0]-1; i>=top[0]+1; i-- )
    {
        result.push_back(nums[i][top[0]]);
    }

   
    
    return result;
}


int main()
{
    vector<vector<int>> arr = {{1,2,3,4,5,6,7},{1,2,3,4,5,6,7},{1,2,3,4,5,6,7},{1,2,3,4,5,6,7},{1,2,3,4,5,6,7},{1,2,3,4,5,6,7},{1,2,3,4,5,6,7}};
    cout<<"Spiral Print: "<<endl;
    for(auto x: spiral(arr))
    {
         cout<<x<<" ";
    }
    cout<<endl;

}