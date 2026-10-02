#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> unionArray(vector<int>& nums1, vector<int>& nums2)
{
    set<int> s;
    vector<int> result = {};
    int leftCurrent = 0;
    int rightCurrent = 0;
    int leftMaxIndex = nums1.size()-1;
    int rightMaxIndex = nums2.size()-1;

    while(leftCurrent<=leftMaxIndex && rightCurrent<=rightMaxIndex)
    {
        if(nums1[leftCurrent]<nums2[rightCurrent])
        {
            if(s.find(nums1[leftCurrent]) == s.end())
            {
            result.push_back(nums1[leftCurrent]);
            s.insert(nums1[leftCurrent]);
            }
            leftCurrent++;
        }
        else if(nums1[leftCurrent]>nums2[rightCurrent])
        {
            if(s.find(nums2[rightCurrent]) == s.end())
            {
            result.push_back(nums2[rightCurrent]);
            s.insert(nums2[rightCurrent]);
            }
            rightCurrent++;
        }
        else
        {
            if(s.find(nums1[leftCurrent]) == s.end())
            {
            result.push_back(nums1[leftCurrent]);
            s.insert(nums1[leftCurrent]);
            }
            leftCurrent++;
            rightCurrent++;
        }
    }
    while(leftCurrent<=leftMaxIndex)
    {
         if(s.find(nums1[leftCurrent]) == s.end())
            {
            result.push_back(nums1[leftCurrent]);
            s.insert(nums1[leftCurrent]);
            }
        leftCurrent++;
    }
    while(rightCurrent<=rightMaxIndex)
    {
        if(s.find(nums2[rightCurrent]) == s.end())
            {
            result.push_back(nums2[rightCurrent]);
            s.insert(nums2[rightCurrent]);
            }
        
        
        rightCurrent++;
    }
    return result;
}


int main()
{
    vector<int> arr1 = {3, 4, 6, 7, 9, 9};
    vector<int> arr2 = {1, 5, 7, 8, 8};
    vector<int> result = unionArray(arr1, arr2);

    for(auto x:result)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}