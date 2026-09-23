#include <iostream>
using namespace std;

int sumOfArray(int arr[], int n)
{
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
int arr[] = {1,2,3,4,5};
int size  = sizeof(arr)/sizeof(arr[0]);


cout<<"The sum of array is "<<sumOfArray(arr, size)<<endl;
}