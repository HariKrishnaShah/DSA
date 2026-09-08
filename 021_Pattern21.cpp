#include <iostream>>
using namespace std;


int main()
{
   

   
      for(int i =1; i<=4; i++)
      {
         if(i%4 ==0 || i%4 ==1)
         {
             for(int y =1;y <=4; y++)
            {
                cout<<"X";
            }
         }
        
         else
         {
            for(int y =1;y <=4; y++)
        {
            if(y<2 || y>=4)
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