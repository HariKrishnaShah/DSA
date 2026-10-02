#include <iostream>
#include <vector>
using namespace std;

void leftRotateArray(vector<int>& arr)
{
    if(arr.empty())
    {
        return;
    }
    int first = arr[0];
    for(int i = 0; i<arr.size()-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr.back() = first;

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