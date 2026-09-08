#include <iostream>
using namespace std;

int main(){
 
    char alphabet[] = {'A', 'B', 'C', 'D', 'E'};
for(int i = 1; i<=5; i++)
{
    int startRowCharCount = 5-i;
   
        for(int y=0; y<i; y++)
        {
           
            cout<<alphabet[startRowCharCount];
            startRowCharCount++;
        }
    
   
    
    cout<<"\n";
}


    return 0;
}