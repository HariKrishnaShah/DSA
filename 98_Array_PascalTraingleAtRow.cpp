#include <iostream>
#include <vector>
using namespace std;

int combination(int n, int r)
{
    int result = 1;

    for(int i = 1; i <= r; i++)
    {
        result = result * (n - i + 1) / i;
    }

    return result;
}


vector<int> pascalTriangleII(int row )
{
    int n = row-1;
    vector<int> result;

    for(int i = 0; i<row; i++)
    {
        result.push_back(combination(n, i));
    }

    return result;

}

int main()
{
    int row = 3;

    for(int x:pascalTriangleII(3))
    {
        cout<<x<<" ";
    }
    cout<<endl;
}