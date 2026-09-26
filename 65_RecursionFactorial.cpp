#include <iostream>
using namespace std;

int factorial(int num)
{
    if(num <=1)
    {
        return 1;
    }
    return num*factorial(num-1);

}

int main()
{
    int number = 3;
    cout<<"The factorial of "<<number<<" is "<<factorial(number)<<endl;
}