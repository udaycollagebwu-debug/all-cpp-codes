// for the bubble short the numbers .
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array :";
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " element :";
        cin >> array[i];
    }
    cout << "The input aray is :";
    for (int i = 0; i < size; i++)
    {
        cout << " " << array[i];
    }
    cout << endl;
    for (int i = 0; i < size - 1; i++) // this loop is for the turm the code will run
    {
        for (int j = 0; j < size - 1 - i; j++) // this loop is for shorting the elements and swap them .
        {
            int space;
            if (array[j] > array[j + 1])
            {
                space = array[j];
                array[j] = array[j + 1];
                array[j + 1] = space;
            }
        }
    }
    cout << "The shorted array is :";
    for (int i = 0; i < size; i++)
    {
        cout << " " << array[i];
    }
    cout << endl;
    return 0;
}