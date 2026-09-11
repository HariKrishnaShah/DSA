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
        
        printFromInToInt(end-1);
        cout<<end<< " ";
    }
}

int main()
{
    printFromInToInt(20);
}