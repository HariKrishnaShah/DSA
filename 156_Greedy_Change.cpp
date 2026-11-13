#include <iostream>
#include <vector>
using namespace std;

bool lemonadeChange(vector<int> &bills)
{
    long long fiveBills = 0;
    long long tensBills = 0;

    for (int i = 0; i < bills.size(); i++)
    {
        if (bills[i] == 5)
        {
            fiveBills++;
        }
        else if (bills[i] == 10)
        {
            if (fiveBills < 1)
            {
                return false;
            }
            else
            {
                fiveBills--;
                tensBills++;
            }
        }
        else if (bills[i] == 20)
        {
            if (fiveBills < 3 && !(tensBills >= 1 && fiveBills >= 1))
            {
                return false;
            }
            if (tensBills >= 1 && fiveBills >= 1)
            {
                tensBills--;
                fiveBills--;
            }
            else
            {
                fiveBills = fiveBills - 3;
            }
        }
    }
    return true;
}

int main()
{
    vector<int> arr = {5, 5, 10, 5, 20};
    cout << "Is the change available: " << lemonadeChange(arr) << endl;
}