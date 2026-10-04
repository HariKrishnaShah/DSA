#include <iostream>
#include <vector>
#include <set>
using namespace std;

void setZeroes(vector<vector<int>> &arr)
{
    set<int> s1;
    set<int> s2;
    int rowSize = arr.size();
    int columnSize = arr[0].size();
    
    for(int i = 0; i<rowSize; i++)
    {
        if(s1.find(i) !=s1.end())
        {
            continue;
        }
        for(int j = 0; j<columnSize; j++ )
        {
            if(s2.find(j) != s2.end() || s1.find(i) !=s1.end())
            {
                continue;
            }
           if(arr[i][j] == 0)
           {
            s1.insert(i);
            s2.insert(j);
            // Setting row Elements Zero
           for(int z = 0; z<columnSize; z++)
           {
            arr[i][z] = 0;
           }
           // Setting column Elements Zero
           for(int z = 0; z<rowSize; z++)
           {
            arr[z][j] = 0;
           }
           }
           
        }
    }
    

}


int main()
{
    vector<vector<int>> arr = {{1, 1,1}, {1, 0, 1}, {1, 1, 1}};
    setZeroes(arr);
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