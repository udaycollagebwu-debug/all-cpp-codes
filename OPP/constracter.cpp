//A constructor initializes an object when it is created.😊
// Sintax : -

// class ClassName {
// public:
//     ClassName() {  👉 the name have to same as the class name .
//         // Constructor code
//     }
// };


#include <iostream>
using namespace std;

class Car {
public:
    Car() {
        cout << "Constructor is called." << endl;
    }
};

int main() {
    Car car1; //the constructor is called automacticly
    return 0;
}