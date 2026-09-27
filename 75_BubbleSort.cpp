#include <iostream>
#include <vector>
using namespace std;

vector<int> bubbleSort(vector<int> &arr)
{
  int n = arr.size();

    for(int i =1; i<n; i++)
    {
        for(int j = 0; j<n-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;

}

int main()
{
    vector<int> arr = {5,1,4,2,8};
    bubbleSort(arr);
    cout<<"Array is sorted now: "<<endl;
    for(auto x:arr)
    {
        cout<<x<<endl;
    }
}