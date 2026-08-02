#include<iostream>
using namespace std;
struct details{
    int Id,phone;
    char name;
    float marks;
};

int main(){
    details student1;
    cout<<"Enter your name (Enter only the first name ):";
    cin>>student1.name;
    cout<<"Enter your student id :";
    cin>>student1.Id;
    cout<<"Enter your phone number :";
    cin>>student1.phone;
    cout<<"Enter your marks :";
    cin>>student1.marks;

    cout<<"Name :"<<student1.name<<endl;
    cout<<"ID :"<<student1.Id<<endl;
    cout<<"Phone number :"<<student1.phone<<endl;
    cout<<"mark :"<<student1.marks<<endl;
    return 0;
}