#include <iostream>
using namespace std;

int countOfOddNumber(int arr[], int n)
{
    int count = 0;
    for(int i = 0; i<n; i++)
    {
        if(arr[i] %2 !=0)
        {
           count++;
        }
    }

    return count;
}

int main()
{
int arr[] = {1,2,3,4,5};
int size  = sizeof(arr)/sizeof(arr[0]);


cout<<"The count of odd numbers in the array is "<<countOfOddNumber(arr, size)<<endl;
}