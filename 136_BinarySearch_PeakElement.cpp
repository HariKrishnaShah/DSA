
#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int> &arr)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] > arr[mid + 1])
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }

    return left;
}

int main()
{
    vector<int> arr = {1, 2, 1, 3, 5, 6, 7};

    int index = findPeakElement(arr);

    cout << "Peak Element Index: " << index << endl;
    cout << "Peak Element: " << arr[index] << endl;

    return 0;
}
