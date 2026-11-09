
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int beautySum(string s)
{
    int n = s.length();
    int totalBeauty = 0;

    // Consider every starting index
    for (int i = 0; i < n; i++)
    {
        int freq[26] = {0};

        // Expand the substring from index i
        for (int j = i; j < n; j++)
        {
            // Update frequency of current character
            freq[s[j] - 'a']++;

            int maxFreq = 0;
            int minFreq = n;

            // Find maximum and minimum non-zero frequencies
            for (int k = 0; k < 26; k++)
            {
                if (freq[k] > 0)
                {
                    maxFreq = max(maxFreq, freq[k]);
                    minFreq = min(minFreq, freq[k]);
                }
            }

            totalBeauty += (maxFreq - minFreq);
        }
    }

    return totalBeauty;
}

int main()
{
    string s;

    cout << "Enter string: ";
    cin >> s;

    cout << "Beauty Sum: " << beautySum(s) << endl;

    return 0;
}
