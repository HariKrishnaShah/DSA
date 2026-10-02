#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondHighestNumber(vector<int> arr)
{
    int highest = INT_MIN;
    int secondHighest = INT_MIN;
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i]>=highest)
        {
            secondHighest = highest;
            highest = arr[i];
        }
        else if(arr[i]>secondHighest)
        {
            secondHighest = arr[i];
        }
    }
    return secondHighest;

}

int main()
{
    vector<int> arr = {1,2,3,0,8,7,6};
    cout<<"Second highest number is "<<secondHighestNumber(arr)<<endl;
}