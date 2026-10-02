#include <iostream>
#include <vector>
using namespace std;


int longestSequence(vector<int> arr)
{
    int current = 0;
    int highest = 0;

    for(int i = 0; i<arr.size(); i++)
    {
        if(arr[i] == 1)
        {
            current++;
        }
       if(arr[i] == 0 || i==arr.size()-1)
        {
            if(current>highest)
            {
                highest = current;
            }
            current = 0;
        }
    }
    return highest;
}

int main()
{
    vector<int> arr = {1,1,0,1,1,1,0,1,1,0,1,1,1,1};
    cout<<"Longest sequence of 1 is "<<longestSequence(arr)<<endl;
}