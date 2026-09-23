#include <iostream>
using namespace std;


int main()
{
    int number = 1234567890;
    int count = 0;
    int x = number;
    while(x>0)
    {
        int lastDigit = x%10;
         x = x/10;
        if(lastDigit%2 !=0)
        {
            count++;
        }
    }
    cout<<"The count of odd digit in "<<number<<" is "<<count<<endl;
}