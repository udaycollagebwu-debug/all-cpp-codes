#include <iostream>
#include <cstring>
using namespace std;

struct student
{
    int stu_id; // we cant initialize any variables inside the structure
    char name[50];
    float cgpa;
};
int main()
{
    student s1;
    cout<<"Enter your id :";
    cin >> s1.stu_id;
    strcpy(s1.name, "uday samkar singha");
    cout<<"Enter your cgpa :";
    cin >> s1.cgpa;
    cout << "Name :" << s1.name << endl;
    cout << "Student ID :" << s1.stu_id << endl;
    cout << "CGPA :" << s1.cgpa << endl;
    return 0;
}
