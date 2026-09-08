#include <iostream>
using namespace std;

int main()
{
    int number = 2;
    int divisorCount = 0;
    for(int i =1; i*i<=number; i++)
    {
        if(number%i ==0)
        {
            if(number/i !=i)
        {
            divisorCount+=2;
        }
        else
        {
        divisorCount++;
        }
        }

        
    }

    cout<<"The number of divisor is "<<divisorCount<<endl;

    if(divisorCount ==2)
    {
        cout<<"The number is prime."<<endl;
    }
    else
    {
        cout<<"The number is not prime."<<endl;
    }
}