#include <iostream>
#include <vector>
using namespace std;

vector<char> reverseHelper(vector<char>& s, int left, int right)
{
    if(left>right)
    {
        return s;
    }
    else
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        return reverseHelper(s, left+1, right-1);
    }

}

vector<char> reverseString(vector<char>& s){
		return reverseHelper(s, 0, s.size()-1);
	}

int main()
{
    vector<char> arr = {'b', 'y', 'e'};
    reverseString(arr);
    cout<<"The reverse is: "<<endl;

    for(auto x:arr)
    {
        cout<<x<<endl;
    }

}