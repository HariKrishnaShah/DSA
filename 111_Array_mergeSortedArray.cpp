#include <iostream>
#include <vector>
#include <map>
using namespace std;


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
    int left = 0;
    int right = 0;

    while(left<=m && right<=n)
    {
        if(nums1[left]<=nums2[right])
        {
            nums1.push_back(nums1[left]);
            left++;
        }
        else
        {
            nums1.push_back(nums2[right]);
            right++;
        }  
    }
    while(left<=m)
    {
        nums1.push_back(nums1[left]);
        left++;
    }
    while(right<=n)
    {
        nums1.push_back(nums2[right]);
        right++;
    }
    for(int i =0; i<=m; i++)
    {
        nums1.erase(nums1.begin());
    }
        
}

int main()
{
    vector<int> arr1 = {-5, -2, 4, 5};
    vector<int> arr2 = {-3, 1, 8};
    merge(arr1, arr1.size()-1, arr2, arr2.size()-1 );

    for(int x: arr1 )
    {
        cout<<x<<" ";
    }
    cout<<endl;


}