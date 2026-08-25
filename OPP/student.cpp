#include <iostream>
#include <string.h>
using namespace std;

class student
{
private:
    /* data */
    int roll_no;
    char name[20];
public:
 void insert_data(int roll_nunber, char *name_in){
    roll_no= roll_nunber;
    strcpy(name,name_in);
 }
void display(){
    cout<<"The name of the student is :"<<name<<endl;
    cout<<"The roll number of the student is :"<<roll_no<<endl;
}
};
int main(){
    student s1;
    student s2;
    s1.insert_data(418,"uday sankar singha");
    s2.insert_data(618,"nabayan singha");
    s1.display();
    s2.display();
}
