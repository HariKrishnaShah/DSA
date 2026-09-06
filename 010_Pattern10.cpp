#include <iostream>
using namespace std;

int main(){

for(int i = 1; i<=9; i++)
{
    if(i<=5)
    {
        for(int y=1; y<=i; y++)
        {
        cout<<"*";
        }
    }
    else
    {
        for(int z=i; z<10;  z++)
        {
            cout<<"*";
        }
    }
    
    cout<<"\n";
}


    return 0;
}