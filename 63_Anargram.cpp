#include <iostream>
using namespace std;

bool isAnagram(string a, string b)
{
    if(a.length() != b.length())
    {
        return false;
    }

    int frequencyA[26] = {0};
    int frequencyB[26] = {0};

    for(int i = 0; i<a.length(); i++)
    {
        frequencyA[a[i] - 'a']++;
        frequencyB[b[i] - 'a']++;
    }

    for(int i = 0;i<26; i++)
    {
        if(frequencyA[i] != frequencyB[i])
        {
            return false;
        }
    }


    return true;
}


int main()
{
    string a = "anagram";
    string b = "nagaram";

    cout<<a<<" and "<<b<<" are anagram: "<<isAnagram(a, b)<<endl;

}