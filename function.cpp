#include<iostream>
using namespace std;
int  oddEven(int num){
    char result;
    if(num%2 == 0){
      result='l';
    }
    else{
        result ='r';
    }
    return result;
}
void input(int number){
    float mindnumber;
     cout<<"Enter a number what is in your mind now :";
     cin>>mindnumber;
     if (0<mindnumber<=90){
        cout<<"Your mind in the midele of 90 numbers only do rase your number .";
     }
     else if (91<mindnumber<200){
        cout<<"You are the good "
     }
}
int main(){
    int number;
    cout<<"Enter the number :";
    cin>>number;
    char resul=oddEven(number);
    if(resul=='l'){
        cout<<"Hello the number is Odd ";
    }
    else if (resul == 'r'){
        cout<<"The number is Even ,So now i am oing to take input :";

    }
}