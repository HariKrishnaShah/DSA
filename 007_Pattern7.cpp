#include <iostream>
using namespace std;


int main(){
    for(int i=5; i>=1; i--){
        
        for(int y=1; y<=9; y++)
        {
          if(y<i || (y>=(i+2*(5-i)+1)))
           {
            cout<<" ";
           }
           else
           {
            cout<<"*";
           }
            
        }
        cout<<"\n";
       
       
    }
}
