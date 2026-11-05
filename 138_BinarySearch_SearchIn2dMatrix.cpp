#include <iostream>
#include <vector>
using namespace std;

vector<int> rowAndColumnFinder(int index, int rowSize, int ColumnSize)
{
    int row = index / ColumnSize;
    int column = index - (row * ColumnSize);
    return {row, column};
}

bool searchMatrix(vector<vector<int>> &mat, int target)
{
    int left = 0;
    int rowSize = mat.size();
    int columnSize = mat[0].size();
    int right = (rowSize * columnSize) - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        int row = rowAndColumnFinder(mid, rowSize, columnSize)[0];
        int column = rowAndColumnFinder(mid, rowSize, columnSize)[1];
        if (mat[row][column] == target)
        {
            return true;
        }
        else if (mat[row][column] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int target = 8;
    cout << "The target " << target << " exists in the array: " << searchMatrix(arr, target) << endl;
}