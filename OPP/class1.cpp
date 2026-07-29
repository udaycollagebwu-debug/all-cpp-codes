#include <iostream>
using namespace std;

class student
{
public:
    string vill;
    string name;
    int age;

    void intro()
    {
        cout << "Hi i am " << name << " I am from " << vill << " and i am " << age << " years old .";
    }
};
int main()
{
    student s1;
    cout << "Enter your name :";
    getline(cin, s1.name);
    cout << "Enter the nam of the village :";
    getline(cin, s1.vill);
    cout << "Enter the age of your :";
    cin >> s1.age;
    s1.intro();
    return 0;
}