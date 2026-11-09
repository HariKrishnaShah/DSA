#include <iostream>
#include <map>
using namespace std;

int oddCharacterCounter(string s)
{
    int oddCount = 0;
    map<char, int> charCounter;

    for (int i = 0; i < s.length(); i++)
    {
        charCounter[s[i]]++;
    }

    auto iterator = charCounter.begin();
    while (iterator != charCounter.end())
    {
        if (iterator->second % 2 != 0)
        {
            oddCount++;
        }
        iterator++;
    }
    return oddCount;
}

long long countSubstrings(string s)
{
    int count = s.length();
    for (int i = 1; i < s.length(); i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            string sub = s.substr(j, (i + 1 - j));
            if (oddCharacterCounter(sub) < 2)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    string s = "aabb";
    cout << "The number of odd character is " << oddCharacterCounter(s) << endl;
    cout << "The substring count is " << countSubstrings(s) << endl;
}