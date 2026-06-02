#include<iostream>
#include<limits>
using namespace std;
char oddEven(int num){
    return (num % 2 == 0) ? 'e' : 'o';
}
void input(){
    double mindnumber;
    cout<<"Enter a number that is in your mind now: ";
    if(!(cin>>mindnumber)){
        cout<<"Invalid input.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return;
    }
    if (mindnumber > 0 && mindnumber <= 90){
        cout<<"Your number is between 1 and 90."<<"\n";
    }
    else if (mindnumber > 90 && mindnumber < 200){
        cout<<"You are good."<<"\n";
    }
    else if(mindnumber >= 200 && mindnumber < 1000){
        cout<<"Nice, your number is in a higher range now!"<<"\n";
    }
    else if(mindnumber >= 1000){
        cout<<"Insane! There are no words to say..."<<"\n";
    }
    else {
        cout<<"You entered a non-positive number."<<"\n";
    }
}
int main(){
    int number;
    cout<<"Enter the number :";
    cin>>number;
    char resul = oddEven(number);
    if(resul == 'o'){
        cout<<"Hello, the number is Odd"<<"\n";
    }
    else if (resul == 'e'){
        cout<<"The number is Even. Now I will take input:"<<"\n";
        input();
    }
    return 0;
}