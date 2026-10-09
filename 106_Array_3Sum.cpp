
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums)
{
    multimap<int, int> vistedElements;
    set<vector<int>> uniqueResults;
    vector<vector<int>> result;

    for (int i = 0; i < nums.size(); i++)
    {
        vistedElements.insert({nums[i], i});
    }

    auto itf = vistedElements.begin();

    while (itf != vistedElements.end())
    {
        int current = itf->first;
        auto it = next(itf);

        while (it != vistedElements.end())
        {
            int selected = it->first;
            int required = 0 - current - selected;

            auto foundItem = vistedElements.find(required);

            if (foundItem != vistedElements.end() &&
                foundItem != itf &&
                foundItem != it)
            {
                vector<int> triplet = {current, selected, required};

                sort(triplet.begin(), triplet.end());

                if (uniqueResults.insert(triplet).second)
                {
                    result.push_back(triplet);
                }
            }

            ++it;
        }

        ++itf;
    }

    return result;
}

int main()
{
    vector<int> arr = {2, -2, 0, 3, -3, 5};

    cout << "Results are:\n";

    for (auto x : threeSum(arr))
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }

    return 0;
}