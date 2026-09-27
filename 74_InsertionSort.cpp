#include <iostream>
#include <vector>
using namespace std;

vector<int> insertionSort(vector<int> &arr)
{
  int n = arr.size();

    for(int i = 1; i < n; i++)
    {
       int key = arr[i];
       int j = i-1;

       while(j>=0 && arr[j]>key)
       {
        arr[j+1] = arr[j];
        j--;
       }
       arr[j+1] = key;
    }
    return arr;

}

int main()
{
    vector<int> arr = {1,3,4,6,2,4};
    insertionSort(arr);
    cout<<"Array is sorted now: "<<endl;
    for(auto x:arr)
    {
        cout<<x<<endl;
    }
}