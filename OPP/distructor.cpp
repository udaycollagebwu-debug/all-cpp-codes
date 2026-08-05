// A destructor is called automatically when an object goes out of scope or is deleted. 
// It is mainly used to free resources such as dynamically allocated memory, close files, 
// or release other system resources.💕

//Sintax :

// class className{
//     public:
//     ~className(){  👉 the class name and the ~name have to same  
//         distructor code 
//     }

#include <iostream>
using namespace std;

class Car {
    public:
     Car(){
        cout<<"The canstractor is called ."<<endl;
     }
     ~Car(){
        cout<<"The distroctor is called ."<<endl;
     }
     Car(){
        cout<<"The canstractor is called ."<<endl;
     }
};

int main(){
    Car car1;
    return 0;
}
// Program Starts
//       │
//       ▼
// Car car1;      ← Constructor is called
//       │
//       │  Object exists
//       │
// return 0;
//       │
//       ▼
// Destructor is called
//       │
//       |  Object dos not exists .
//       |
//       ▼
// Program Ends