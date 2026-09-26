#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<char> frequencySort(string a)
{
    map<char, int> frequencyA;

    for(int i = 0; i < a.length(); i++)
    {
        frequencyA[a[i]]++;
    }

    vector<char> result;

    while(!frequencyA.empty())
    {
        int maxFreq = 0;
        char maxChar;

        for(auto item: frequencyA)
        {
            if(item.second>maxFreq)
            {
                maxChar = item.first;
                maxFreq = item.second;
            }
        }

       
            result.push_back(maxChar);
        
        frequencyA.erase(maxChar);
    }
   
    return result;
}


int main()
{
    string a = "anagram";

   cout<<"Sorted by Frequency"<<endl;
   for(const auto& x:frequencySort(a))
   {
    cout<<x<< " "<<endl;
   }

}