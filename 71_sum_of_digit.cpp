#include <iostream>
using namespace std;


int addDigits(int num)
{
		if(num/10 == 0)
        {
            return num;
        }
        int sum = 0;
        while(num !=0)
        {
            int digit = num%10;
            sum += digit;
            num = num/10;
        }
        return addDigits(sum);
}

int main()
{
    int number = 529;
    cout<<"Sum is: "<<addDigits(number)<<endl;
}