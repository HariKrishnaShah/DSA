#include <iostream>
#include <vector>
using namespace std;

int rowWithMax1s(vector<vector<int>> &mat)
{
    int noOfRows = mat.size();
    int maxOnes = 0;
    int answer = -1;
    for (int i = 0; i < noOfRows; i++)
    {
        int left = 0;
        int end = mat[i].size() - 1;
        int right = mat[i].size() - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (mat[i][mid] == 1)
            {
                int current = (end - mid) + 1;
                if (current > maxOnes)
                {
                    maxOnes = current;
                    answer = i;
                }
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
    }
    return answer;
}
int main()
{
    vector<vector<int>> arr = {{1, 1, 1}, {0, 0, 1}, {0, 0, 0}};
    cout << "The index of row with max 1 is " << rowWithMax1s(arr) << endl;
}