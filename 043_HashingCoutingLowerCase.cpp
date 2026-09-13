#include <iostream>
using namespace std;

string arr = "harikrishnashah";
int hashedArr[26] = {0};


int main()
{

    for(int i =0; i<arr.length(); i++)
    {
       hashedArr[(arr[i]-'a')]++;
    }

    for(int i=0; i<26; i++)
    {
        cout<<hashedArr[i]<<endl;
    }
}