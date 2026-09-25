#include <iostream>
using namespace std;

bool isIsomorphic(string a, string b)
{
    if(a.length() !=b.length())
    {
        return false;
    }
    bool isIsomorphicString = true;
    for(int i = 0; i<a.length(); i++)
    {
        
        char fromA = a[i];
        char fromB = b[i];
        for(int j = 0; j<a.length(); j++ )
        {
            
            if((a[j] == fromA && b[j] != fromB) || (b[j] == fromB && a[j] != fromA)  )
            {
                isIsomorphicString = false;
                return false;
            }
        }
       
    }
 return isIsomorphicString;
}


int main()
{
    string a = "egg";
    string b = "ads";
    cout<<"Is "<<a<<" and "<<b<<" isomorphic : "<<isIsomorphic(a, b)<<endl;

}