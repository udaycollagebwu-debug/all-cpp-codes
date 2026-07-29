#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"the value of the empty variable is :"<<number<<endl;
    cout<<"The size of the empty variable is :"<<sizeof(number)<<endl;
    cout<<"Enter a number :";
    cin>>number;
    cout<<"The size of the variable after insliting value "<<number<<" is :"<<sizeof(number)<<endl;
    return 0;
}