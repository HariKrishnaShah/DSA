#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int>& arr, int largest,int current = 0)
{
    if(current>=arr.size())
    {
        return largest;
    }
    if(arr[current]>largest)
    {
        largest = arr[current];
    }
    return largestElement(arr, largest, current+1);

}

int main()
{
    vector<int> arr = {1,2,3,0,8,7,6};
  
    cout<<"Largest element is "<< largestElement(arr, arr[0])<<endl;;
}