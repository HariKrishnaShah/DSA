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


int pascalTriangleI(int row, int column)
{
    int n = row-1;
    int r = column-1;

    return combination(n,r);

}

int main()
{
    int row = 30;
    int column = 15;
    cout<<"Element at row: "<<row<<" a, column: "<<column<<" is: "<<pascalTriangleI(row,column)<<endl;
}