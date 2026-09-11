#include <iostream>
using namespace std;


void printFromInToInt(int end)
{
    if(end==0)
    {
        cout<<endl;
        return;
    }
    else
    {
         cout<<end<< " ";
        printFromInToInt(end-1);
       
    }
}

int main()
{
    printFromInToInt(20);
}