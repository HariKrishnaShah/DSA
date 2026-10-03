#include <iostream>
#include <vector>
using namespace std;

void rotateMatrix(vector<vector<int>>& arr)
{
    vector<vector<int>> result;
    int rowSize = arr.size();
    int columnSize = arr[0].size();

    for(int j = 0; j<columnSize; j++)
    {
        vector<int> temp;
        for(int i =rowSize-1; i>=0; i-- )
        {
            temp.push_back(arr[i][j]);
        }
        result.push_back(temp);
    }
    arr = result;

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