//Remove Duplicates from Sorted Array — Two pointers
#include <iostream>
using namespace std;

// Bubble sort
int sort_array(int *ar, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (ar[j] > ar[j + 1]) {
                int temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
    return size;
}

// Remove duplicates using two pointers
int remove_duplicates(int *arr, int size) {
    if (size == 0) return 0;

    int j = 0; // slow pointer
    for (int i = 1; i < size; i++) { // fast pointer
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }
    return j + 1; // new length
}

int main() {
    int arr[] = {3,4,2,2,6,7,1,9,23,3,45,78,67,45,3,7,5,6,1,8};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort_array(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;

    int newSize = remove_duplicates(arr, size);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
