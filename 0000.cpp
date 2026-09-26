#include <iostream>
#include <vector>
using namespace std;
int main(){
   cout<<"Hello World";
    vector<int> arr = {1,2,3};
   
    cout<<*arr.begin()<<endl;
    auto a = arr.begin();
    return 0;
}