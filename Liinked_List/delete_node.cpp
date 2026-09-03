//1.Write a program to delete a node from a linked list (given a value).

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to delete the first node containing the target value
Node* deleteByValue(Node* head, int value) {
    if (head == nullptr) return nullptr;

    // Case 1: The head node holds the value to be deleted
    if (head->data == value) {
        Node* temp = head;
        head = head->next; // Move head to the next node
        delete temp;        // Free memory
        return head;
    }

    // Case 2: Search for the value in the rest of the list
    Node* current = head;
    while (current->next != nullptr && current->next->data != value) {
        current = current->next;
    }

    // If node was found
    if (current->next != nullptr) {
        Node* nodeToDelete = current->next;
        current->next = current->next->next; // Unlink the node
        delete nodeToDelete;                 // Free memory
    }

    return head;
}

// Function to display the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Creating nodes
    Node* n1 = new Node{10, nullptr};
    Node* n2 = new Node{20, nullptr};
    Node* n3 = new Node{30, nullptr};
    Node* n4 = new Node{40, nullptr};

    // Linking nodes
    Node* head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    cout << "Original List: ";
    printList(head);

    // Delete a node with value 30
    head = deleteByValue(head, 30);

    cout << "After deleting 30: ";
    printList(head);

    return 0;
}