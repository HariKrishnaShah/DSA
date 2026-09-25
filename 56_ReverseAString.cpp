#include <iostream>
using namespace std;

string reverseString(string str)
{
    string reversedString = str;
    int left = 0;
    int right = reversedString.length() - 1;
    while(left<right)
    {
        char leftLetter = reversedString[left];
        reversedString[left] = reversedString[right];
        reversedString[right] = leftLetter;
        left++;
        right--;
    }
    return reversedString;

}

int main()
{
    string string = "Hari";
    cout<<"The reverse of "<<string<< " is "<<reverseString(string)<<endl;

}