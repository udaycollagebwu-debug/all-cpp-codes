// Write a class Rectangle with methods to calculate area and perimeter. Demonstrate usage with objects.❓

#include <iostream>
#include <cmath>
using namespace std;

class Traingale
{
public:
    int line1, line2, line3;
    void area()
    {
        if ((line1 + line2 > line3) && (line1 + line3 > line2) && (line2 + line3 > line1))
        {
            float s = (line1 + line2 + line3) / 2.0;
            float area = sqrt(s * (s - line1) * (s - line2) * (s - line3));
            cout << "The arer of the traingale is : " << area << endl;
        }
        else{
            cout<<"The traingale is invalid. "<<endl;
        }
    }
    void perimeter()
    {
        int paramiter = line1 + line2 + line3;
        cout << "The perimeter of the traingaale is : " << paramiter << endl;
    }
    
};

int main()
{
    Traingale no1;
    cout << "Enter the line 1 : ";
    cin >> no1.line1;
    cout << "Enter the line 2 : ";
    cin >> no1.line2;
    cout << "Enter the line 3 : ";
    cin >> no1.line3;
    no1.area();
    no1.perimeter();
    return 0;
}