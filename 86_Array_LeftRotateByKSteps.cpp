#include <iostream>
#include <vector>
using namespace std;

void leftRotateArray(vector<int>& arr, int steps)
{
    
    if(arr.empty())
    {
        return;
    }
    int size = arr.size();
    int actualSteps = steps%size;
    vector<int> temp(arr.begin(), arr.begin()+actualSteps);
    int i = 0;
    for(i; i<arr.size()-actualSteps; i++)
    {
        arr[i] = arr[i+actualSteps];
    }

    for(int j = i; j<size; j++)
    {
        arr[j] = temp[j-i];
    }
   

}


int main()
{
    vector<int> arr = {1,2,3,4,5};
    int steps = 2;
    leftRotateArray(arr, steps);
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}