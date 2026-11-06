
#include <iostream>
#include <string>
using namespace std;

string removeOuterParentheses(string s)
{
    int depth = 0;
    string result = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            if (depth > 0)
            {
                result += '(';
            }

            depth++;
        }
        else
        {
            depth--;

            if (depth > 0)
            {
                result += ')';
            }
        }
    }

    return result;
}

int main()
{
    string s = "()(()())(())";

    string result = removeOuterParentheses(s);

    cout << "Input: " << s << endl;
    cout << "Output: " << result << endl;

    return 0;
}
