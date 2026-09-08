#include <iostream>>
using namespace std;


int main()
{
    for(int i =1; i<=10; i++)
    {
        if(i<=5)
        {
        for(int y =1; y<=10; y++)
        {
            if(y<=6-i || y>=5+i)
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
            if(y<=i-5 || y>=16-i)
            {
                cout<<"X";
            }
            else
            {
                cout<<" ";
            }
            
        }
        }
        
        cout<<"\n";
    }
}