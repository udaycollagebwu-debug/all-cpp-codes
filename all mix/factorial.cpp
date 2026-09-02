// Print the factorial of a number using a loop.
#include <iostream>
using namespace std;
int main()
{
    int number, facto = 1;
    cout << "Enter the number :";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        facto *= i;
    }
    cout<<"The factorial of the number "<<number<<" is :"<<facto<<endl;
    return 0;
}