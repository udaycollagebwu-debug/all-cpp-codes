// Create a class Student with attributes name, rollNo, and marks. Add a method display() to print student details.❓

#include<iostream>
using namespace std;

class Sutudent{
    public:
    string name;
    int roll;
    float marks;
    void display(){
        cout<<"The details of the student ."<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Roll No : "<<roll<<endl;
        cout<<"Marks : "<<marks<<endl;
    }
};

int main(){
    Sutudent No1;

    cout<<"Ente the name of the student :";
    getline(cin,No1.name);
    cout<<"Enter the roll no of the student : ";
    cin>>No1.roll;
    cout<<"Enter the marks of the student : ";
    cin>>No1.marks;

    //displai the details of the student
    No1.display();

    return 0;
}