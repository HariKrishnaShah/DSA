#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int x = 121;
   

    //Using loop to find the nunber of digit
    int y = x;
    int count = 0;
    while(y%10 !=0)
    {
        count++;
        y = y/10;
    }
    cout<<"The number of digit via iteration is "<<count<<endl;

    //Reversing a number
    int z = x;
    int reverse = 0;
    while(z%10 !=0)
    {
        int power = 1;
        for(int i =1; i<=count-1; i++)
        {
            power = power*10;
        }
        reverse = reverse + ((z%10) * power);
        z = z/10;
        count--;
    }
    cout<<"The reverse of "<<x<< " is " <<reverse<<endl;

    if(x == reverse)
    {
        cout<<"The number is palindrome."<<endl;
    }
    else
    {
        cout<<"The number is not palindrome."<<endl;
    }
}