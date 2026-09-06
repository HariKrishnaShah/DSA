#include <iostream>
using namespace std;

int main(){

for(int i = 1; i<=5; i++)
{
    if(i<=5)
    {
        for(int y=1; y<=i; y++)
        {
        if(((y+i)%2) == 0)
        {
            cout<<1;
        }
        else
        {
            cout<<0;
        }
        }
    }
   
    
    cout<<"\n";
}


    return 0;
}