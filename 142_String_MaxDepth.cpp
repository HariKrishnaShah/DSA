#include <iostream>
#include <string>
using namespace std;

int maxDepth(string s)
{
    int maxDepth = 0;
    int currentDepth = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            currentDepth += 1;
            if (currentDepth > maxDepth)
            {
                maxDepth = currentDepth;
            }
        }
        else if (s[i] == ')')
        {
            currentDepth -= 1;
        }
    }

    return maxDepth;
}

int main()
{

    string s = "(1+(2*3)+((8)/4))+1";
    cout << "The max depth is " << maxDepth(s) << endl;
}