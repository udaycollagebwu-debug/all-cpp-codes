#include <iostream>
using namespace std;
int operation(int a, int b, char op)
{
    float ans;
    if (op == '+')
    {
        ans = a + b;
    }
    else if (op == '-')
    {
        ans = a - b;
    }
    else if (op == '*')
    {
        ans = a * b;
    }
    else if (op == '/')
    {
        if (a > b)
        {
            return NULL;
        }
        else
        {
            ans = a / b;
        }
    }
    else
    {
        return NULL;
    }
    return ans;
}
int main()
{
    int a, b;
    char op;
    cout << "Enter the first number :";
    cin >> a;
    cout << "Enter the second number :";
    cin >> b;
    cout << "Enter the operator (+,-,*,/):";
    cin >> op;
    float bage = operation(a, b, op);
    if (bage == NULL)
    {
        cout << "The code is not sucesce full ! WE FAILED !!";
    }
    else
    {
        cout << "The anser is : " << bage << endl;
    }
    return 0;
}
