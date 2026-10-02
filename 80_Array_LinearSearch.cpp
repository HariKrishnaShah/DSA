#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int>& arr, int target, int current = 0)
{
    if(current>=arr.size())
    {
        return -1;
    }
    if(arr[current] == target)
    {
        return current;
    }
    return linearSearch(arr, target, current+1);

}

int main()
{
    vector<int> arr = {1,2,3,0,8,7,6};
    int target = 2;
    cout<<target<<" is at "<<linearSearch(arr, target)<<endl;;
}