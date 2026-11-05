
#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &mat, int target)
{
    int rowSize = mat.size();
    int columnSize = mat[0].size();

    int row = 0;
    int column = columnSize - 1;

    while (row < rowSize && column >= 0)
    {
        if (mat[row][column] == target)
        {
            return true;
        }
        else if (mat[row][column] > target)
        {
            // Move left
            column--;
        }
        else
        {
            // Move down
            row++;
        }
    }

    return false;
}

int main()
{
    vector<vector<int>> arr =
        {
            {1, 4, 7, 11, 15},
            {2, 5, 8, 12, 19},
            {3, 6, 9, 16, 22},
            {10, 13, 14, 17, 24},
            {18, 21, 23, 26, 30}};

    int target = 1;

    if (searchMatrix(arr, target))
    {
        cout << "True: Target exists in the matrix." << endl;
    }
    else
    {
        cout << "False: Target does not exist in the matrix." << endl;
    }

    return 0;
}
