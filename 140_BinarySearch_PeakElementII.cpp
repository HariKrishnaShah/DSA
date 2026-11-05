
#include <iostream>
#include <vector>
using namespace std;

vector<int> findPeakGrid(vector<vector<int>> &mat)
{
    int n = mat.size();
    int m = mat[0].size();

    int left = 0;
    int right = m - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        // Find maximum element in the middle column
        int maxRow = 0;

        for (int i = 1; i < n; i++)
        {
            if (mat[i][mid] > mat[maxRow][mid])
            {
                maxRow = i;
            }
        }

        // Get left and right neighbours
        int leftValue = (mid > 0) ? mat[maxRow][mid - 1] : -1;
        int rightValue = (mid < m - 1) ? mat[maxRow][mid + 1] : -1;

        // Check if current element is a peak
        if (mat[maxRow][mid] > leftValue &&
            mat[maxRow][mid] > rightValue)
        {
            return {maxRow, mid};
        }

        // Move towards the larger neighbour
        else if (leftValue > mat[maxRow][mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return {-1, -1};
}
int main()
{

    vector<vector<int>> mat =
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}};

    vector<int> ans = findPeakGrid(mat);

    cout << "[" << ans[0] << ", " << ans[1] << "]" << endl;

    return 0;
}
