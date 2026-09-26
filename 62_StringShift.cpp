#include <iostream>
using namespace std;

bool isRotateable(string a, string b)
{
    int modValue = a.length();
    string temp = a;

    for(int j = 0; j<a.length(); j++)
    {
    for(int i = 0; i<a.length(); i++)
    {
        char x = a[i];
        int index = (i+modValue-1)%modValue;
        temp[index] = x;
    }
    a = temp;
    if(temp == b)
    {
        return true;
    }
}

    return false;

}


int main()
{
    string a = "abcde";
    string b = "adeac";

    cout<<"Is "<<a<<" rotatable to : "<<b<< " :"<<isRotateable(a, b)<<endl;
}