#include <iostream>
#include <vector>
using namespace std;

int partitionIndex(vector<int>& arr, int low, int high)
{
    int pivot = arr[high];
    int i = low-1;
    for(int j=low; j<high; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    int temp2 = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp2;
    return (i+1);

}

void quickSortHelper(vector<int>& arr, int low, int high)
{
    if(low<high)
    {
    int paritionPoint = partitionIndex(arr, low, high);
    quickSortHelper(arr, low, paritionPoint-1 );
    quickSortHelper(arr, paritionPoint+1, high);
    }    

}

 vector<int> quickSort(vector<int>& nums) 
 {
    quickSortHelper(nums, 0, nums.size()-1);
    return nums;

}

int main()
{
    vector<int> arr = {1,4,2,7,8,3,9,5,6};
    quickSort(arr);
    cout<<"The sorted array is: "<<endl;
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    
}