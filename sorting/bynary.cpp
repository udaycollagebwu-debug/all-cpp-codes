#include <iostream>
#include <vector>
using namespace std;

void input_elements(vector<int>& array)
{
    cout << "Enter a sorted array of size " << array.size() << endl;
    for (int i = 0; i < array.size(); i++)
    {
        cout << "Enter element " << i + 1 << " : ";
        cin >> array[i];
    }
}

void display_elements(const vector<int>& array)
{
    cout << "The array is : ";
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << "\t";
    }
    cout << endl;
}

int binary_search(const vector<int>& array, int key)
{
    int low = 0;
    int high = array.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int size;
    cout << "Enter the size : ";
    cin >> size;

    vector<int> array(size);
    input_elements(array);
    display_elements(array);

    int key;
    cout << "Enter the key to search : ";
    cin >> key;

    int result = binary_search(array, key);
    if (result != -1)
    {
        cout << "Element found at index " << result << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}