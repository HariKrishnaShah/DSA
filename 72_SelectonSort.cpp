#include <iostream>
#include <vector>
using namespace std;

vector<int> selectionSort(vector<int> &arr)
{
    int size = arr.size();
    for(int i = 0; i<size; i++)
    {
        int minIndex = i;
        for(int j =i+1; j<size; j++)
        {
            
            if(arr[j]<arr[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;

    }
    return arr;

}

int main()
{
    vector<int> arr = {1,3,4,6,2,4};
    selectionSort(arr);
    cout<<"Array is sorted now: "<<endl;
    for(auto x:arr)
    {
        cout<<x<<endl;
    }
}