#include <iostream>
using namespace std;

int sumTillN(int n)
{
    
    if(n==0)
    {
        return 0;
    }
    return n + sumTillN(n-1);
   
    
}
int main()
{

    cout<<"Sum is "<<sumTillN(20)<<endl;
}