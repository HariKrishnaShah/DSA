#include <iostream>
using namespace std;


int main()
{
    int num = 20;
    int count = 0;
    int divisor[20];
    for(int i =1; i<20; i++)
    {
        if(num%i == 0)
        {
            count++;
            divisor[count-1] = i;
        }
    }

    cout<<"The divisors are: "<<endl;

    for(int i=0; i<count; i++)
    {
        cout<<divisor[i]<<" "<<endl;
    }
}