#include <iostream>
using namespace std;

int arr[] = {2,3,4,5,1,2,3,2};
int hashedArr[6] = {0,0,0,0,0,0};


int main()
{

    for(int i =0; i<sizeof(arr)/sizeof(arr[0]); i++)
    {
       hashedArr[(arr[i])]++;
    }

    for(int i=0; i<6; i++)
    {
        cout<<hashedArr[i]<<endl;
    }
}