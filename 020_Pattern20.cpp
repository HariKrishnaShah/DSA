#include <iostream>
using namespace std;


int main()
{
    for(int i=1; i<=9; i++)
    {
        if(i<=4)
        {
            for(int y =1; y<=10; y++)
            {
                if(y<=i || y>=11-i)
                {
                     cout<<"X";
                }
                else
                {
                    cout<<" ";
                }
               
            }
        }
        else if(i>=6)
        {
            for(int y =1; y<=10; y++)
            {
                if(y<=10-i || y>=i+1)
                {
                     cout<<"X";
                }
                else
                {
                    cout<<" ";
                }
            }
        }
        else
        {
            for(int y =1; y<=10; y++)
            {
                cout<<"X";
            }
        }
       
        cout<<"\n";
    }
}