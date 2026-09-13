#include <iostream>
using namespace std;


void reverseArray(int arr[], int start, int end)
{
    if(start >= end )
    {
        return;
    }
    else
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        reverseArray(arr, start+1, end-1);
    }
}

void printArray(int arr[], int size)
{
   
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[] = {1,2,3,4,5};
    reverseArray(arr, 0, 4);
    printArray(arr, sizeof(arr)/sizeof(arr[0]));
    
}