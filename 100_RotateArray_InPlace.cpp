#include <iostream>
#include <vector>
using namespace std;

void rotateMatrix(vector<vector<int>>& arr)
{
    

}


int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotateMatrix(arr);
    for(auto x:arr)
    {
        for(auto y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

}