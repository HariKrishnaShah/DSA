#include <iostream>
using namespace std;

int main()
{
    for(int i=1; i<=4; i++)
    {
        for(int y = 1; y<=8; y++)
        {

            if(y<=i || y>=9-i)
            {
               if(y<=4)
            {
                cout<<y;
            }
            else
            {
                cout<<9-y;
            }
            }
            else
            {
                cout<<" ";
            }
            

        }

        cout<<"\n";
    }


    return 0;
}