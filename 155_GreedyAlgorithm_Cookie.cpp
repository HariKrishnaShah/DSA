#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int findMaximumCookieStudents(vector<int> &student, vector<int> &cookie)
{
    sort(student.begin(), student.end());
    sort(cookie.begin(), cookie.end());

    int i = 0;
    int j = 0;
    int count = 0;
    while (i < student.size() && j < cookie.size())
    {
        if (student[i] <= cookie[j])
        {
            count++;
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    return count;
}
int main()
{
    vector<int> student = {4, 5, 1};
    vector<int> cookie = {6, 4, 2};
    cout << "The count of student who can get cookie is " << findMaximumCookieStudents(student, cookie) << endl;
}