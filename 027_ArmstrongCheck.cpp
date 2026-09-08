#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int x = 1532;
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
    int z = x;
    int sum = 0;
    while(z%10 != 0)
    {
        sum += pow(z%10,count);
      
        z = z/10;
    }
    cout<<"The sum is "<<sum<<endl;

    if(sum==x)
    {
     cout<<"It is armstrong"<<endl;
    }
    else
    {
        cout<<"It is not armstrong"<<endl;
    }
}