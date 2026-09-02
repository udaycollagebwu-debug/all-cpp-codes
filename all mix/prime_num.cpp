//Check if a number is prime.
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number for check :";
    cin>>number;
    int fact=0;
    for(int i=2;i<number;i++){
        if(number%i==0){
            fact=1;
        }
    }
    if(fact==0){
        cout<<"The "<<number<<" is a prime number."<<endl;
    }
    else{
        cout<<"The number "<<number<<" is not a prime number ."<<endl;
    }
    return 0;
}