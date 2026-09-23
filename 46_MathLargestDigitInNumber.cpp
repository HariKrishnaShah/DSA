#include <iostream>
using namespace std;


int main()
{
    int number = 1234567890;
    int largestNumber = number%10;
    int x = number;
    while(x>0)
    {
        int lastDigit = x%10;
         x = x/10;
        if(lastDigit>largestNumber)
        {
            largestNumber = lastDigit;
        }
    }
    cout<<"The largest digit in "<<number<<" is "<<largestNumber<<endl;
}