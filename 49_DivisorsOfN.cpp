#include <iostream>
using namespace std;

vector<int>findDivisorsOfN(int number)
{
    vector<int> divisors = {};
    for(int i = 1; i<=number; i++)
    {
        if(number%i == 0)
        {
            divisors.push_back(i);
        }
    }
    return divisors;
}


int main()
{
    int number = 20;
    vector<int> result = findDivisorsOfN(number);
    cout<<"The divisors of "<<number<<" are : "<<endl;
    for(int i = 0; i<result.size(); i++)
    {
        cout<<result[i]<<endl;
    }
}