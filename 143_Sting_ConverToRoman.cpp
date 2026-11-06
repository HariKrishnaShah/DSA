
#include <iostream>
#include <string>
using namespace std;

int romanToInt(string s)
{
    int result = 0;

    for (int i = 0; i < s.length(); i++)
    {
        int current;
        int next = 0;

        // Get current character value
        switch (s[i])
        {
        case 'I':
            current = 1;
            break;
        case 'V':
            current = 5;
            break;
        case 'X':
            current = 10;
            break;
        case 'L':
            current = 50;
            break;
        case 'C':
            current = 100;
            break;
        case 'D':
            current = 500;
            break;
        case 'M':
            current = 1000;
            break;
        }

        // Get next character value
        if (i + 1 < s.length())
        {
            switch (s[i + 1])
            {
            case 'I':
                next = 1;
                break;
            case 'V':
                next = 5;
                break;
            case 'X':
                next = 10;
                break;
            case 'L':
                next = 50;
                break;
            case 'C':
                next = 100;
                break;
            case 'D':
                next = 500;
                break;
            case 'M':
                next = 1000;
                break;
            }
        }

        // Subtract if current value is smaller
        if (current < next)
        {
            result -= current;
        }
        else
        {
            result += current;
        }
    }

    return result;
}

int main()
{
    string s;
    cin >> s;

    cout << romanToInt(s) << endl;

    return 0;
}
