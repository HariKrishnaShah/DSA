#include <iostream>
#include <unordered_map>
using namespace std;


bool isIsomorphic(string a, string b)
{
    unordered_map<char, char> aTob;
    unordered_map<char, char> bToa;

    if(a.length() != b.length())
    {
        return false;
    }

    for(int i = 0; i<a.length(); i++)
    {
        char fromA = a[i];
        char fromB = b[i];

        if(aTob.find(fromA) != aTob.end() )
        {
            if(aTob[fromA] != fromB)
            {
                return false;
            }
        }
        else
        {
            aTob[fromA] = fromB;
        }

         if(bToa.find(fromB) != bToa.end() )
        {
            if(bToa[fromB] != fromA)
            {
                return false;
            }
        }
        else
        {
            bToa[fromB] = fromA;
        }

    }

return true;
}

int main()
{

    string a = "ab";
    string b = "aa";

     cout<<"Is "<<a<<" and "<<b<<" isomorphic : "<<isIsomorphic(a, b)<<endl;
}