
#include <iostream>
using namespace std;

// Returns:
//  1 if mid^N == M
//  0 if mid^N < M
// -1 if mid^N > M

int checkPower(int mid, int N, int M)
{
    long long result = 1;

    for (int i = 0; i < N; i++)
    {
        result *= mid;

        if (result > M)
            return -1;
    }

    if (result == M)
        return 1;

    return 0;
}

int NthRoot(int N, int M)
{
    if (M == 0)
        return 0;

    if (N == 1 || M == 1)
        return M;

    int left = 1;
    int right = M;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        int result = checkPower(mid, N, M);

        if (result == 1)
            return mid;

        else if (result == -1)
            right = mid - 1;

        else
            left = mid + 1;
    }

    return -1;
}

int main()
{
    int N = 4, M = 69;

    int answer = NthRoot(N, M);

    if (answer != -1)
        cout << "The " << N << "th root of "
             << M << " is " << answer << endl;
    else
        cout << "Exact Nth root does not exist" << endl;
}
