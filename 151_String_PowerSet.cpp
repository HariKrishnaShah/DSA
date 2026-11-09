
#include <iostream>
#include <vector>
using namespace std;

void solve(int index, vector<int> &nums,
           vector<int> &current,
           vector<vector<int>> &ans)
{
    // Base case: All elements have been considered
    if (index == nums.size())
    {
        ans.push_back(current);
        return;
    }

    // Choice 1: Include the current element
    current.push_back(nums[index]);

    solve(index + 1, nums, current, ans);

    // Backtrack: Remove the current element
    current.pop_back();

    // Choice 2: Don't include the current element
    solve(index + 1, nums, current, ans);
}

vector<vector<int>> powerSet(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> current;

    solve(0, nums, current, ans);

    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> result = powerSet(nums);

    cout << "[ ";

    for (auto subset : result)
    {
        cout << "[ ";

        for (int x : subset)
        {
            cout << x << " ";
        }

        cout << "] ";
    }

    cout << "]" << endl;

    return 0;
}
