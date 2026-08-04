// Define a struct Student with fields: name, roll, marks.

// Write a program to input details of 5 students and print the one with the highest marks.

#include<iostream>
using namespace std;

struct Student{
    char name[50];
    int id;
    int mark;
};

int main(){
    int student_count;
    cout<<"Enter the number of student you want to store details :";
    cin>>student_count;    // user desided hou many details he /she want to store . hear we have to store 5 students .

    Student no[student_count];

    for(int i=0;i<student_count;i++){  //take input of the students by the kyeboard 
        cout<<"Enter name of "<<i+1<<" number student :";
        cin>>no[i].name; //take input only from the first space .after the space the input can't take .
        cout<<"Enter id of "<<i+1<<" number student :";
        cin>>no[i].id;
        cout<<"Enter marks of "<<i+1<<" number student :";
        cin>>no[i].mark;
    }
    // to chek the highest mark student .
    int highest=no[0].mark;  //consider the fast mask is the highest mask.
    int j=0;  // to store the highest marks student position . now the position is the first one .
    for (int i =1;i<student_count;i++){
        if(highest<no[i].mark){
            highest=no[i].mark;
            j=i;
        }
    }
    cout<<"The highest marks student details ."<<endl;
    cout<<"Name :"<<no[j].name<<endl;
    cout<<"ID :"<<no[j].id<<endl;
    cout<<"Marks :"<<no[j].mark<<endl;
    return 0;
}