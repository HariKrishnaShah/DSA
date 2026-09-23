#include <iostream>
using namespace std;


int primeCountTillN(int n)
{
    int primeCount = 0;
    for(int j = 1; j<=n; j++)
    {
        int divisorCount = 0;
        for(int i =1; i*i<=j; i++)
        {
            if(j%i ==0)
            {
                if(j/i !=i)
            {
                divisorCount+=2;
            }
            else
            {
            divisorCount++;
            }
            }

            
        }

        

        if(divisorCount ==2)
        {
            primeCount++;
        }
    }
    return primeCount;

}
int main()
{

    int number = 10;
    cout<<"The count of prime numbers till "<<number<<" are "<<primeCountTillN(number)<<endl;
}