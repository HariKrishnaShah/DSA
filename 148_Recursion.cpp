#include <iostream>
using namespace std;

double myPow(double x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n > 0)
    {
        return x * myPow(x, n - 1);
    }
    else
    {
        return 1 / x * myPow(x, n + 1);
    }
}

int main()
{
    double x = 2.0000;
    int n = -3;
    cout << "The number " << x << " raised to " << n << " is: " << myPow(x, n) << endl;
}