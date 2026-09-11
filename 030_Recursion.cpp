#include <iostream>
using namespace std;


void printNTimes(string sentence, int count)
{
    if(count == 0)
    {
        return;
    }
    else
    {
        cout<<sentence<<endl;
        printNTimes(sentence, count-1);
    }
}

int main()
{
    printNTimes("Hello World", 5);
}