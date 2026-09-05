#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string :";
    getline(cin,s);
    cout<<s<<endl;
    cout<<"Print through the for loop :"<<endl;;
    for ( int i = 0; i < s.size(); i++){
        cout<<s[i]<<endl;
    }
    cout<<"The size of the strin is :"<<s.size()<<endl;
    return 0;
}