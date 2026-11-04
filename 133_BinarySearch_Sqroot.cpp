
#include <iostream>
using namespace std;

int floorSqrt(int target)
{
    if (target < 2)
        return target;

    int left = 1;
    int right = target / 2;
    int answer = 0;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        long long square = 1LL * mid * mid;

        if (square == target)
        {
            return mid;
        }
        else if (square > target)
        {
            right = mid - 1;
        }
        else
        {
            answer = mid;
            left = mid + 1;
        }
    }

    return answer;
}

int main()
{
    int target = 1291937368;

    cout << "The sqrt of " << target
         << " is " << floorSqrt(target) << endl;
}
