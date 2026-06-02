#include <iostream>
using namespace std;
int fatro(int num)
{
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result *= i;
    }
    return result;
}
int main()
{
    int number;
    int resu;
    cout << "Enter the number :";
    cin >> number;
    resu = fatro(number);
    cout << "The factorial of " << number << " is " << resu << endl;
    return 0;
}