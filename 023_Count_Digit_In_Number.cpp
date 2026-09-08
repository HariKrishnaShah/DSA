#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int x = 421;
    int digitCount1 = (int)log10(x)+1;
    cout<<"The number of digit in " << x << " is " << digitCount1<<endl;

    //Using loop to find the nunber of digit
    int y = x;
    int count = 0;
    while(y%10 !=0)
    {
        count++;
        y = y/10;
    }
    cout<<"The number of digit via iteration is "<<count<<endl;
}