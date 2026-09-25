#include <iostream>
using namespace std;

bool isPalindrome(string str)
{
    int left = 0;
    int right = str.length() - 1;
    while(left<right)
    {
       if(str[left] !=str[right])
       {
        return false;
       }
        left++;
        right--;
    }
    return true;
}

int main()
{
    string string = "aba";
    cout<<"Is "<<string<< " is "<<isPalindrome(string)<<endl;

}