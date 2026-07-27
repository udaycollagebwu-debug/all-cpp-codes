#include <iostream>
using namespace std;
class Dog
{
public:
    void bark();
};
void Dog::bark()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Woof . . . .!"<<endl;
    }
}

int main(){
    Dog bahadur;
    bahadur.bark();
    return 0;
}