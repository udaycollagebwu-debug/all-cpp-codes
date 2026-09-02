// Reverse the digits of a number
#include <iostream>
using namespace std;
int main()
{
    int number, rev = 0;
    cout << "Enter a number that you want to reverse :";
    cin >> number;
    while (number != 0)
    {
        int reminder=number%10;
        rev=10*rev+reminder;
        number=number/10;
    }
    cout<<"The reverse number is :"<<rev<<endl;
    return 0;
}