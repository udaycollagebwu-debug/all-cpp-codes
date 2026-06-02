#include <iostream>
using namespace std;
int mian()
{
    int a, b;
    char op;
    float result;
    cout << "Enter the two numbers with a space : ";
    cin >> a;
    cin >> b;
    cout << "Enter the operation(+,-,*,/) that you want to do: ";
    cin >> op;
    switch (op)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        cout << "You enter a rong operation!!!!!!!";
    }
    cout << "The ans (result) is :" << result << endl;
    return 0;
}