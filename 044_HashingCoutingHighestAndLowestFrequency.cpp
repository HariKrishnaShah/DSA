#include <iostream>
using namespace std;

string arr = "harikrishnashahA33dqdadx233321aaaaaaaaaaaaaa";
int hashedArr[256] = {0};


int main()
{
   int maxValue=0,minValue=0;
    int maxElement=0, minElement = 0;
    for(int i =0; i<arr.length(); i++)
    {
       hashedArr[(arr[i])]++;
    }

    for(int i=0; i<256; i++)
    {
       if(hashedArr[i]<=minValue)
       {
        minValue = hashedArr[i];
        minElement = i;
       }
       if(hashedArr[i]>maxValue)
       {
        maxValue = hashedArr[i];
        maxElement = i;
     }
    }

cout<<"The highest occuring letter is "<<static_cast<char>(maxElement)<<" with frequency "<<maxValue<<endl;
cout<<"The lowest occuring letter is "<<static_cast<char>(minElement)<<" with frequency "<<minValue<<endl;

return 0;
  
}
   