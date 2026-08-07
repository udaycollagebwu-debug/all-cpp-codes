//Create a base class Shape and a derived class Circle. Implement a method area() in both classes.❓

#include <iostream>
using namespace std;

class Shape {
public:
    void area() {
        cout << "Area cannot be calculated for a general shape." << endl;
    }
};

class Circle : public Shape {
public:
    float radius;

    void area() {
        float result = 3.14159 * radius * radius;
        cout << "Area of Circle = " << result << endl;
    }
};

int main() {
    Shape s;
    Circle c;

    c.radius = 5;

    cout << "Base Class:" << endl;
    s.area();

    cout << "\nDerived Class:" << endl;
    c.area();

    return 0;
}