#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<vector<int>> arr;

    int maxRow = 5;


    for(int i =0; i<maxRow; i++)
    {
        if(i==0)
        {
           arr.push_back({{1}});
        }
        else if (i==1)
        {
           arr.push_back({{1,1}});
        }
        else
        {
            vector<int> result = {1};
            for(int j = 0; j<arr[i-1].size()-1; j++)
            {
                int sum = arr[i-1][j] + arr[i-1][j+1];
                result.push_back(sum);
            }
            result.push_back(1);
            arr.push_back(result);
        }
        

    }

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