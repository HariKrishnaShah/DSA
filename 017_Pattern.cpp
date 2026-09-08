#include <iostream>
using namespace std;

int main()
{
    char alphabet[] = {'A', 'B', 'C', 'D', 'E'};

    for(int i=1; i<=4; i++)
    {
 int charCount = 0;
        for(int y =1; y<=7; y++)
        {
           
            if(y<=4-i || y>=4+i)
            {
                cout<<" ";
                
            }
            else
            {
                charCount++;
                if(charCount<=i)
                {
                    
                    cout<<alphabet[charCount-1];
                     
                }
                else
                {
                    cout<<alphabet[2*i-charCount -1];
                }
                
            }
            
            
            
        }


        cout<<"\n";
    }

    return 0;
}