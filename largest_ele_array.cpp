//Write a program to find the largest and smallest element in an array.
#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter hoe many number you want to store:";
    cin>>size;
    int numbers[size];
    for ( int i = 0; i < size; i++){    // this is for the input of the array of the number .
        cout<<"Enter the "<<i+1<<" element :";
        cin>>numbers[i];
    }
    // for the chacking purpas 
    int bigest=numbers[0];
    for( int i =1;i<size;i++){
        if(bigest < numbers[i]){
            bigest=numbers[i];
        }
    }
    cout<<"The numbers are :";
    for(int i =0 ;i<size;i++){
        cout<<" "<<numbers[i];
    }
    cout<<endl;
    cout<<"The bigest number among numbers list is :"<<bigest<<endl;

    return 0;
}