#include <iostream>
using namespace std;

int main(){
 
    char alphabet[] = {'A', 'B', 'C', 'D', 'E'};
for(int i = 5; i>=1; i--)
{
   
        for(int y=0; y<i; y++)
        {
            cout<<alphabet[y];
        }
    
   
    
    cout<<"\n";
}


    return 0;
}