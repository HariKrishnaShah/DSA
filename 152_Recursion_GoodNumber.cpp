
#include <iostream>
using namespace std;

const long long MOD = 1000000007;

// Recursive Binary Exponentiation
long long power(long long base, long long exp)
{
    if (exp == 0)
        return 1;

    long long half = power(base, exp / 2);

    long long result = (half * half) % MOD;

    if (exp % 2 == 1)
    {
        result = (result * base) % MOD;
    }

    return result;
}

int countGoodNumbers(long long n)
{
    if (n == 0)
        return 1;

    long long evenPositions = (n + 1) / 2;
    long long oddPositions = n / 2;

    long long evenWays = power(5, evenPositions);
    long long oddWays = power(4, oddPositions);

    return (evenWays * oddWays) % MOD;
}

int main()
{
    long long n;
    cin >> n;

    cout << countGoodNumbers(n) << endl;

    return 0;
}
