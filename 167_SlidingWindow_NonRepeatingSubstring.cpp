
#include <iostream>
#include <unordered_set>
using namespace std;

int longestSubstring(string s)
{
    unordered_set<char> visited;

    int left = 0;
    int right = 0;
    int maxLength = 0;

    while (right < s.length())
    {
        if (visited.find(s[right]) == visited.end())
        {
            visited.insert(s[right]);

            maxLength = max(maxLength, right - left + 1);

            right++;
        }
        else
        {
            visited.erase(s[left]);
            left++;
        }
    }

    return maxLength;
}

int main()
{
    string s = "abcddabac";

    cout << longestSubstring(s) << endl;
}
