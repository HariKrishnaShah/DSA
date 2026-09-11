#include <iostream>
using namespace std;


void printNTimes(string sentence, int count)
{
    if(count == 0)
    {
        cout<<endl;
        return;
    }
    else
    {
        cout<<sentence<<" ";
        printNTimes(sentence, count-1);
    }
}

int main()
{
    printNTimes("Hari", 5);
}