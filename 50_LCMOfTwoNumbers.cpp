#include <iostream>
using namespace std;


int findLCM(int number1, int number2)
{
    int current = number1>number2?number1:number2;
    while(true)
    {
     if(current % number1 == 0 && current%number2 == 0)
     {
        return current;
     }
     current++;
    }

}

int main()
{

    int number1 = 1;
    int number2 = 2;
    cout<<"The lcm of "<<number1<<" and "<<number2<<" is "<<findLCM(number1, number2)<<endl;

}