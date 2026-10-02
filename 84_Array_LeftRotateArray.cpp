#include <iostream>
#include <vector>
using namespace std;

void leftRotateArray(vector<int>& arr)
{
    int size = arr.size();
    vector<int> temp = arr;
    for(int i=0; i<arr.size(); i++)
    {
        int targetIndex = (i+size-1)%size;
        temp[targetIndex] = arr[i];
    }
    arr = temp;
}


int main()
{
    vector<int> arr = {1,2,3,4,5};
    leftRotateArray(arr);
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}