#include <iostream>
using namespace std;


bool isPerfectNumber(int number)
{
   
    int sum = 0;
    for(int i = 1; i<number; i++)
    {
        if(number%i == 0)
        {
            sum = sum +i;
        }
    }
    if(sum == number)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int number = 6;
    cout<<"\nIs "<<number<<" a perfect number: "<<isPerfectNumber(number)<<endl;
}