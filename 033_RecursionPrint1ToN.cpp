#include <iostream>
using namespace std;


void printFromInToInt(int start, int end)
{
    if(start > end)
    {
        cout<<endl;
        return;
    }
    else
    {
        cout<<start<< " ";
        printFromInToInt(start+1, end);
    }
}

int main()
{
    printFromInToInt(1, 20);
}