// vector input and display
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num;
    vector<int> numbers;  // vector is like a array that can epand 
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a number :";
        cin >> num;
        numbers.push_back(num);
    }
    cout << "The vector size is :" << numbers.size() << endl;
    cout << "The vector capacity is :" << numbers.capacity() << endl;
    cout << "The vector elements are : ";
    for (int value : numbers)
    {
        cout << " " << value;
    }
    return 0;
}