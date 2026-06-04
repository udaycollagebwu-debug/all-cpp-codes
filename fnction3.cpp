// making 3 number there positions 1 st ,2nd ,3rd.😊

#include <iostream>
using namespace std;
int wenner1(int a, int b, int c)
{
    int matchWener1;
    if (a > b && a > c)
    {
        matchWener1 = a;
    }
    else if (b > a && b > c)
    {
        matchWener1 = b;
    }
    else
    {
        matchWener1 = c;
    }
    return matchWener1;
}
int wenner2(int a, int b, int c)    //❌
{
    int matchWener2;
    if (a > b && b > c)
    {
        matchWener2 = b;
    }
    else if (c > a && a > b)
    {
        matchWener2 = a;
    }
    else
    {
        matchWener2 = c;
    }
    return matchWener2;
}
int wenner3(int a, int b, int c)
{
    int matchWener3;
    if (a > b && b > c)
    {
        matchWener3 = c;
    }
    else if (c > b && b > a)
    {
        matchWener3 = a;
    }
    else
    {
        matchWener3 = b;
    }
    return matchWener3;
}
int main()
{
    int x, y, z;
    cout << "Enter the three number ,her we will deside that which is big and which is lower ."<<"\n";
    cout << "Enter them with space :";
    cin >> x;
    cin >> y;
    cin >> z;
    int first, second, therd;
    first = wenner1(x, y, z);
    second = wenner2(x, y, z);
    therd = wenner3(x, y, z);
    cout<<"The first number mins the biggest number is :"<<first<<endl;
    cout<<"The second number mins the middel number is :"<<second<<endl;
    cout<<"The last number mins the lowest number is :"<<therd<<endl;
    return 0;
}
//This is my code that is not working . I work for 1.5 hr for this but i did'n make is so i am uploding 
// this as it is 😊