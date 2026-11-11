#include <iostream>
using namespace std;

bool checkIthBit(int n, int i)
{
    if (n & (1 << i))
    {
        return 1;
    }
    {
        return 0;
    }
}

bool isOdd(int n)
{
    if (n & (1 << 0))
    {
        return 1;
    }
    {
        return 0;
    }
}
bool isPowerOfTwo(int n)
{
    if (n > 0 && (n & (n - 1)) == 0)
    {
        return 1;
    }
    return 0;
}
int setRightmostUnsetBit(int n)
{
    return n | (n + 1);
}

int clearRightMostBit(int n)
{
    return (n & (n - 1));
}

int countSetBits(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n)
        {
            count++;
        }
        n = n & (n - 1);
    }
    return count;
}
void swap(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    return;
}
int minBitsFlip(int start, int goal)
{
    int answer = start ^ goal;
    return countSetBits(answer);
}
int divide(int dividend, int divisor)
{

    // Handle overflow case
    if (dividend == INT_MIN && divisor == -1)
        return INT_MAX;

    // Determine sign of answer
    bool negative = (dividend < 0) != (divisor < 0);

    // Convert to positive long long values
    long long a = abs((long long)dividend);
    long long b = abs((long long)divisor);

    long long quotient = 0;

    // Try powers of 2 from largest to smallest
    for (int i = 31; i >= 0; i--)
    {

        if ((b << i) <= a)
        {
            a -= (b << i);
            quotient += (1LL << i);
        }
    }

    // Apply sign
    if (negative)
        quotient = -quotient;

    return (int)quotient;
}
int xorTillN(int n)
{
    if (n % 4 == 0)
        return n;
    if (n % 4 == 1)
        return 1;
    if (n % 4 == 2)
        return n + 1;
    return 0;
}

int findRangeXOR(int l, int r)
{
    return xorTillN(r) ^ xorTillN(l - 1);
}

int singleNumber(vector<int> &nums)
{
    int answer = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        answer = answer ^ nums[i];
    }

    return answer;
}

int singleNumber(vector<int> &nums)
{
    int answer = 0;

    for (int i = 0; i < 32; i++)
    {
        int count = 0;

        for (int j = 0; j < nums.size(); j++)
        {
            if ((nums[j] & (1 << i)) != 0)
            {
                count++;
            }
        }

        if (count % 3 != 0)
        {
            answer |= (1 << i);
        }
    }

    return answer;
}
vector<int> singleNumberInArray(vector<int> &nums)
{
    int xr = 0;

    // Step 1: XOR all elements
    for (int num : nums)
    {
        xr ^= num;
    }

    // Step 2: Find the rightmost set bit
    int bit = xr & -xr;

    // Step 3: Divide numbers into two groups
    int a = 0, b = 0;

    for (int num : nums)
    {
        if (num & bit)
        {
            a ^= num;
        }
        else
        {
            b ^= num;
        }
    }

    // Step 4: Return in ascending order
    if (a > b)
        swap(a, b);

    return {a, b};
}
int main()
{
    int num, i;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter which bit to check if is it set: ";
    cin >> i;
    cout << "Is " << i << " bit set: " << checkIthBit(num, i) << endl;
    cout << "Is the number odd: " << isOdd(num) << endl;
}
