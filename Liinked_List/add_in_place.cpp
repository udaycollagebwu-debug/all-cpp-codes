#include<iostream>
using namespace std;

struct Node{   //declear a node 
    int data;
    Node* next;
};


int main(){
    Node* n1 = new Node;
    Node* n2 = new Node;
    Node* n3 = new Node;
    Node* n4 = new Node;
    Node* n5 = new Node;
    Node* head = n1;

    n1->data = 10;
    n1->next = n2;

    n2->data = 20;
    n2->next = n3;

    n3->data = 30;
    n3->next = n4;
    
    n4->data = 40;
    n4->next = n5;
    
    n5->data = 50;
    n5->next = nullptr;
// print the data .
    cout<<head->data<<endl;
    cout<<head->next->data<<endl;
    cout<<head->next->next->data<<endl;
    cout<<head->next->next->next->data<<endl;
    cout<<head->next->next->next->next->data<<endl;

    // we want to insert a node inside this 
    // hear we insert the node after the thred node between 3 and 4 node .

    //we have to travel to the 3 node .
    Node* p = head; // now this is pointing to the head mins the "n1" node .
    p = head->next->next; // we are in the n3 node 
    //   ^     ^     ^
    //   |     |     |
    //  n1    n2    n3  
    // pointing .

    // creat a new node .
    Node* newNode =new Node; // ereat a new node and the node point the next node after the p node 
    newNode->data = 119; // insert a data in the node .
    newNode->next= p->next;
    // we cunnect the p node to the new node .
    p->next = newNode;


    Node* temp = head;
   while (temp != nullptr)
   {
    cout<<temp->data<< " ";
    temp= temp->next;
   }
   cout<<endl;
   


    return 0;
}