#include <iostream>
#include <algorithm>
using namespace std;

string longestPalindrome(string s)
{
    string answer = "";

    for (int i = 0; i < s.length(); i++)
    {
        char currentChar = s[i];
        string current = "";
        for (int j = i; j < s.length(); j++)
        {
            current = current + s[j];
            if (s[j] == currentChar)
            {
                string reverseStr = current;
                reverse(reverseStr.begin(), reverseStr.end());
                if (current == reverseStr)
                {
                    if (current.length() > answer.length())
                    {
                        answer = current;
                    }
                }
            }
        }
    }
    return answer;
}

int main()
{
    string s = "cbbd";
    cout << "The longest palindrome sub string is " << longestPalindrome(s) << endl;
}