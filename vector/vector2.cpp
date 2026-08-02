//this code is for taking input names and store it
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string name;
    vector<string> names;
    cout<<"Taking input of names."<<endl;
    for(int i=0;i<5;i++){
        getline(cin,name);
        names.push_back(name);
    }
    cout<<"The size of the vector is :"<<names.size()<<endl;
    cout<<"The capacity of the vector is :"<<names.capacity()<<endl;
    for(string valu : names){
        cout<<", "<<valu;
    }
    return 0;
}