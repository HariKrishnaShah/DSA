#include <iostream>
using namespace std;

bool isPrime(int num, int current)
{
    if(num <= 1)
    {
        return false;
    }
    if(current == 1)
    {
        return true;
    }

    if(num%current == 0)
    {
        return false;
    }
    else
    {
        return isPrime(num, current-1);
    }

}

bool checkPrime(int num)
{
		return isPrime(num, num-1);
}

int main()
{
    int number = 5;
    int number2 = 6;
    cout<<number<<" is "<<" prime: "<<checkPrime(number)<<endl;
    cout<<number2<<" is "<<" prime: "<<checkPrime(number2)<<endl;
}