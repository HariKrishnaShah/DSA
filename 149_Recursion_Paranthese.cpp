#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(int n, int open, int close, string current, vector<string> &answer)
{
    // Base case: We have placed all 2*n parentheses
    if (current.length() == 2 * n)
    {
        answer.push_back(current);
        return;
    }

    // We can add an opening bracket if we haven't used all n
    if (open < n)
    {
        solve(n, open + 1, close, current + "(", answer);
    }

    // We can add a closing bracket only if it won't make the string invalid
    if (close < open)
    {
        solve(n, open, close + 1, current + ")", answer);
    }
}

vector<string> generateParenthesis(int n)
{
    vector<string> answer;

    solve(n, 0, 0, "", answer);

    return answer;
}

int main()
{
    int n = 3;

    vector<string> result = generateParenthesis(n);

    cout << "Valid parentheses combinations:\n";

    for (string s : result)
    {
        cout << s << endl;
    }

    return 0;
}