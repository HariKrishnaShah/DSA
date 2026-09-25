#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string> arr)
{
    string prefix = "";
    for(int j = 0; j<arr[0].length(); j++)
    {
        char current = arr[0][j];
        int flag = true;
        for(int i = 0; i<arr.size(); i++ )
        {
            if(j>=arr[i].length())
            {
                flag = false;
                continue;
            }
            if(arr[i][j] != current)
            {
                flag = false;
            }
        }
        if(flag == true)
        {
            prefix += current;
        }
    }
    return prefix;
}

int main()
{
    vector<string> arr = {"flywers" , "flyw" , "fly", "flyght" };
    cout<<"The longest common prefix is "<<longestCommonPrefix(arr)<<endl;
}