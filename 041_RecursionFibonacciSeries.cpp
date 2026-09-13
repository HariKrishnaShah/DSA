#include <iostream>
using namespace std;


int fibonacciSeries(int n)
{

if(n == 1)
{
    return 0;
   
}
else if(n == 2)
{
  return 1;
   
}
else
{
   return  (fibonacciSeries(n-2) + fibonacciSeries(n-1));
}

}

void printFibonacciSeries(int n)
{

    for(int i =1; i<=n; i++)
    {
        cout<<fibonacciSeries(i)<<" "<<endl;;
    }
}

int main()
{

    int n = 50;
    printFibonacciSeries(n);

}