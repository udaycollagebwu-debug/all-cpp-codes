#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    vector<string> carName;
    vector<string> holderName;
    cout << "Enter the number of cars you store :";
    cin >> size;
    cin.ignore();
    for (int i = 0; i < size; i++)
    {
        string name, car;
        cout << "Count : " << i + 1 << endl;
        cout << "Enter the car holdre name :";
        getline(cin, name);
        holderName.push_back(name);

        cout << "Enter the car name :";
        getline(cin, car);
        carName.push_back(car);
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Count : " << i + 1 << endl;
        cout << "Car Name : " << carName[i] << endl;
        cout << "Name : " << holderName[i] << endl;
    }
    return 0;
}