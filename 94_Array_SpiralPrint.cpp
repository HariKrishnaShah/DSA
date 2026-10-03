#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> spiralHelper(vector<vector<int>>& nums, vector<int> top, vector<int>right, vector<int>bottom, vector<int>left, vector<int>& result)
{
    if(top[0]>bottom[0] || left[1]>right[1])
    {
        return result;
    }
    else if(top[0]==bottom[0] && top[1]==bottom[1])
    {
        result.push_back(nums[top[0]][bottom[0]]);
        return result;
    }
    // top to left
    for(int i = top[1]; i<=right[1]; i++)
    {
        result.push_back(nums[top[0]][i]);
    }
    // Right column: top -> bottom
    for(int i = top[0] + 1; i <= bottom[0]; i++)
    {
        result.push_back(nums[i][right[1]]);
    }

    if(top[0] < bottom[0])
    {
        for(int i=bottom[1]-1; i>=left[1]; i--)
    {
        result.push_back(nums[bottom[0]][i]);
    }
    }

    
    if(left[1] < right[1])
    {
        for(int i=bottom[0]-1; i>=top[0]+1; i-- )
    {
        result.push_back(nums[i][left[1]]);
    }
    }
    

    top[0]+=1;
    top[1]+=1;
    right[0]+=1;
    right[1]-=1;
    bottom[0]-=1;
    bottom[1]-=1;
    left[0]-=1;
    left[1]++;

    return spiralHelper(nums, top, right, bottom, left, result );
}

vector<int> spiralOrder(vector<vector<int>>& nums)
{
     vector<int> result;
    int m = nums[0].size()-1;
    int n = nums.size()-1;
    vector<int> top= {0,0};
    vector<int> right = {0, m};
    vector<int> bottom= {n,m};
    vector<int> left = {n,0};

    return spiralHelper(nums, top, right, bottom, left, result );
}


int main()
{
    vector<vector<int>> arr = {{1}, {2}, {3}, {4}, {5}};
    cout<<"Spiral Print: "<<endl;
    for(auto x: spiralOrder(arr))
    {
         cout<<x<<" ";
    }
    cout<<endl;

}