#include <iostream>
#include <vector>
using namespace std;

void bubblePass(vector<int>& arr, int j, int end)
{
    if(j>=end)
    {
        return;
    }
    if(arr[j]>arr[j+1])
    {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
    }
    bubblePass(arr, j+1, end);
}

vector<int> bubbleSort(vector<int> &arr, int current = 1)
{
  int n = arr.size();

    if(current>=n)
    {
        return arr;
    }
    bubblePass(arr, 0, n-current);
    return bubbleSort(arr, current+1);
    

}

int main()
{
    vector<int> arr = {5,1,4,2,8,3,7,6,9,0};
    bubbleSort(arr);
    cout<<"Array is sorted now: "<<endl;
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}