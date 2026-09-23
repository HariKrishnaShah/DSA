#include <iostream>
using namespace std;

int arr[] = {5,5,5};
int arrSize = sizeof(arr)/sizeof(arr[0]);
int hashedArr[10] = {0};


int main()
{
   
    for(int i =0; i<arrSize; i++)
    {
       hashedArr[(arr[i])]++;
    }
    int maxValue=0,minValue=hashedArr[arr[0]];
    int maxElement=0, minElement = arr[0];
    for(int i=0; i<10; i++)
    {
       if(hashedArr[i]<minValue && hashedArr[i] !=0)
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

cout<<"The highest occuring letter is "<<maxElement<<" with frequency "<<maxValue<<endl;
cout<<"The lowest occuring letter is "<<minElement<<" with frequency "<<minValue<<endl;
cout<<"The Sum of max and minimum Frequency is "<<maxValue+minValue<<endl;

return 0;
  
}
   