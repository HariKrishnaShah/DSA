#include <iostream>
#include <vector>
using namespace std;

void rotateMatrix(vector<vector<int>> &arr)
{
    int rowSize = arr.size();
    int columnSize = arr[0].size();
    
    for(int i = 0; i<rowSize; i++)
    {
        for(int j = i+1; j<columnSize; j++ )
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int i = 0; i<rowSize; i++)
    {
        for(int j = 0; j<columnSize/2; j++ )
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][columnSize-j-1];
            arr[i][columnSize-j-1] = temp;
        }
    }

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