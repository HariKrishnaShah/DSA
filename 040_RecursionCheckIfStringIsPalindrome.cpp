#include <iostream>
using namespace std;


int checkPalindrome(string arr, int start, int end)
{
    if(start >= end )
    {
        return 1;
    }
    else
    {
        
       if( arr[start] != arr[end])
       {
        return 0;
       }
        return checkPalindrome(arr, start+1, end-1);
    }
}

int main()
{
    string str = "aba";
    int isPalindrome = checkPalindrome(str, 0, str.length()-1);
    if(isPalindrome)
    {
        cout<<"It is Palindrome";
    }
    else
    {
        cout<<"It is not Palindrome";
    }
    return 0;
}