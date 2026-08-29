#include <iostream>
#include <cassert>
using namespace std;

struct Node {
    int data;
    Node* link;

    // Function to build a forward linked list
    Node* buildingForwordList() {
        Node *first, *last, *newNode;
        int value;
        cout << "Enter the value to be inserted (-1 to stop): ";
        cin >> value;
        first = NULL;
        last = NULL;

        while (value != -1) {
            newNode = new Node;
            assert(newNode != NULL);
            newNode->data = value;
            newNode->link = NULL;

            if (first == NULL) {
                first = newNode;
                last = newNode;
            } else {
                last->link = newNode;
                last = newNode;
            }

            cout << "Enter the value to be inserted (-1 to stop): ";
            cin >> value;
        }
        return first;
    }
};

// Function to traverse and print the linked list
void printList(Node* head) {
    cout << "Linked List: ";
    while (head != NULL) {
        cout << head->data << " ";
        head = head->link;
    }
    cout << endl;
}

int main() {
    Node obj;  // Create a Node object to call the function
    Node* head = obj.buildingForwordList();  // Build the list
    printList(head);  // Print the list
    return 0;
}
