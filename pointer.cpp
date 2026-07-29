#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"Enter your name :";
    getline(cin,name);
    
    string *nameptr=&name;
    cout<<"your name *nameptr :"<<nameptr<<endl;


    cout<<"your name is :"<<name<<endl;
    string* ptrName=&name;
    cout<<"your name string* name address : "<<ptrName<<endl;

    cout<<"print the name using pointer :"<<*ptrName;
    return 0;
}