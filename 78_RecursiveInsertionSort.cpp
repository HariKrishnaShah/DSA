#include <iostream>
#include <vector>
using namespace std;

void insertionPass(vector<int>& arr, int key, int j)
{
    if(j<0 || arr[j]<key)
    {
        arr[j+1] = key;
        return;
    }
    arr[j+1] = arr[j];
    insertionPass(arr, key, j-1);

}

vector<int> insertionSort(vector<int> &arr, int current = 1)
{
  int n = arr.size();

    if(current>=n)
    {
        return arr;
    }
    int key = arr[current];
    int j = current-1;

    insertionPass(arr, key, j);

    return insertionSort(arr, current+1);
    

}

int main()
{
    vector<int> arr = {1,3,4,6,2,5,8,7,9,0};
    insertionSort(arr);
    cout<<"Array is sorted now: "<<endl;
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}