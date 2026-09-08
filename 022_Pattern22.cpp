#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i<=7; i++)
    {
        for(int y = 1; y<=7; y++)
        {
            // cout<<y+((i-1)*7);
            int position = y+((i-1)*7);
            if(i==1 || i==7 || position== (7*(i-1) +1) || position==7*i)
            {
                cout<<"4 ";
            }
            else if(i==2 || i==6 || position ==(7*(i-1) +2) || position == 7*i -1  )
            {
                cout<<"3 ";
            }
            else if(i==3 || i==5 || position ==(7*(i-1) +3) || position == 7*i -2  )
            {
                cout<<"2 ";
            }
            else if(i==2 || i==4 || position ==(7*(i-1) +4) || position == 7*i -3  )
            {
                cout<<"1 ";
            }
            else
            {
                cout<<"X";
                cout <<' ';
            }
            
        }
        cout <<"\n";
    }
}