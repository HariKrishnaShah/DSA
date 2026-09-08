#include <iostream>
using namespace std;


void EuclideanGCD(int x, int y)
{
    
   int num1 = x;
   int num2 = y;
   

    while(num1 !=0 && num2 !=0)
    {
        int minumum = num1<num2?num1:num2;
        int maximum = num1>num2?num1:num2;
        num1 = maximum-minumum;
        num2 = minumum;
        
    
    }
    
    cout<<"The gcd by euclidean algorithm is "<<(num1==0?num2:num1)<<endl;
}
int main()
{
    int a = 20, b =15;


    //Backward iteration from minimum.

    int minimum = a<b?a:b;
   
    int gcd = 1;
    for(int i = minimum; i>1; i--)
    {
        if(a%i ==0 && b%i ==0)
        {
            gcd = i;
            break;
        }
    }
    cout<<"The GCD is "<<gcd<<endl;

    EuclideanGCD(a,b);
}