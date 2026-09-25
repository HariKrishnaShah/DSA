#include <iostream>
#include <string>
using namespace std;

string largestOddNumber(string str)
{
    int lastOddIndex = -1;

    // Find the rightmost odd digit
    for (int i = 0; i < str.length(); i++)
    {
        int digit = str[i] - '0';

        if (digit % 2 != 0)
        {
            lastOddIndex = i;
        }
    }

    // No odd digit found
    if (lastOddIndex == -1)
    {
        return "";
    }

    // Take substring up to the rightmost odd digit
    string result = str.substr(0, lastOddIndex + 1);

    // Remove leading zeros
    int start = 0;

    while (start < result.length() && result[start] == '0')
    {
        start++;
    }

    result = result.substr(start);

    return result;
}

int main()
{
    string str = "0214638";

    cout << "The largest odd number in "
         << str << " is "
         << largestOddNumber(str) << endl;

    return 0;
}