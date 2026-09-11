#include <iostream>
using namespace std;


void printFromInToInt(int end, int start)
{
    if(end<start)
    {
        cout<<endl;
        return;
    }
    else
    {
        cout<<end<< " ";
        printFromInToInt(end-1, start);
    }
}

int main()
{
    printFromInToInt(20,1);
}