//👉 Write a simple class Car with attributes brand and year. Create an object and print its details.
//👌 Maruti 800,Maruti Suzuki,1983

#include<iostream>
using namespace std;
class car{   //this is the class 
public:
    char name[20];   // atrubuts of the class 
    char brand[30];
    int year;
    void display(){
        cout<<"The details of the car are ."<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Brand : "<<brand<<endl;
        cout<<"Year : "<<year<<endl;
    }
};
int main(){
    car maruti; //the object of the class
    cout<<"Enter the car name :";
    cin.getline(maruti.name,20);
    cout<<"Enter the car brand :";
    cin.getline(maruti.brand,30);
    cout<<"Enter the year of relise :";
    cin>>maruti.year;

    maruti.display();
    return 0;
}