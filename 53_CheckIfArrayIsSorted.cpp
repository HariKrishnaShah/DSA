#include <iostream>
using namespace std;

bool isArraySorted(int arr[], int n)
{
    bool isSorted = true;
    for(int i = 0; i<n-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            isSorted = false;
        }
    }

    return isSorted;
}

int main()
{
int arr[] = {1,2,3,4,5,3};
int size  = sizeof(arr)/sizeof(arr[0]);


cout<<"The count of odd numbers in the array is "<<isArraySorted(arr, size)<<endl;
}