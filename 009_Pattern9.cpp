#include <iostream>
using namespace std;


int main(){
    for(int i=1; i<=10; i++){
        
        if(i<=5)
        {
        for(int y=1; y<=9; y++)
        {
          if(y<(6-i) || y>=i+5)
           {
            cout<<" ";
           }
           else
           {
            cout<<"*";
           }
            
        }
        }
        else
        {
          
            for(int y=1; y<=9; y++)
        {
          if(y<(i-5) || y>(15-i))
           {
            cout<<" ";
           }
           else
           {
            cout<<"*";
           }
            
        }
        }
        
        cout<<"\n";
       
       
    }
}
