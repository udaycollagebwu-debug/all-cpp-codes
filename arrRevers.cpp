// Reverse an array.
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array :";
    cin >> size;
    int arr[size], arrRev[size]; // hear i want to store the reversr array in the arrRev
    for (int i = 0; i < size; i++)
    {                                                               // array so that i take the same size as the original array.
        cout << "Enter the " << i + 1 << " element of the array :"; // taking input loop
        cin >> arr[i];
    }
    cout << "The original array is :";
    for (int i = 0; i < size; i++)
    {
        cout << "  " << arr[i];
    }
    cout<<endl;
    int j = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        arrRev[j] = arr[i];
        j++;
    }
    cout << "The Reverse array is :";
    for (int i = 0; i < size; i++)
    {
        cout << "  " << arrRev[i];
    }
     cout<<endl;
    return 0;
}