#include <iostream>
using namespace std;

// int arr[] = {2,3,4,5,1,2,3,2};
int arr[] = {1};
int hashedArr[10] = {0};


int main()
{
    for(int i =0; i<sizeof(arr)/sizeof(arr[0]); i++)
    {
       hashedArr[(arr[i])]++;
    }
    int highestValue = -1;
    int highestElement = -1;

    int secondHighestValue = -1;
    int secondHighestElement = -1;

    for(int i = 0; i<10; i++)
    {
        if(hashedArr[i] == 0)
        {
            continue;
        }
        if(hashedArr[i]>highestValue)
        {
            secondHighestValue = highestValue;
            secondHighestElement = highestElement;
            highestValue = hashedArr[i];
            highestElement = i;
            
        }
        else if(hashedArr[i]>secondHighestValue && hashedArr[i]<highestValue)
        {
            secondHighestValue = hashedArr[i];
            secondHighestElement = i;
        }
    }
    cout<<"The second highest element is "<<secondHighestElement<< " with value "<<secondHighestValue<<endl;


}