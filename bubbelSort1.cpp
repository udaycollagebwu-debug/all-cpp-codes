//for the bubble short the string (like -uday=-->aduy).
#include<iostream>
#include<string>
using namespace std;
int main(){
    string inputstring;
    cout<<"Enter the string that you want to short :";
    getline(cin,inputstring);
    cout<<"The string before shorting :"<<inputstring<<endl;
    for(int i=0;i<inputstring.length()-1;i++){
        for(int j=0;j<inputstring.length()-1-i;j++){
            if(inputstring[j]>inputstring[j+1]){
                swap(inputstring[j],inputstring[j+1]);
            }
        }
    }
    cout<<"The string after shorting :"<<inputstring;
    return 0;
}