#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "Enter your name :";
    getline(cin, name);  //take input with the space 
    cout << "The name you enterd is : " << name << endl;
    return 0;
}