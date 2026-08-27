#include<iostream>
using namespace std;

struct Node // we decleat a structer of a node .
{
    int data;
    Node* next;
};
int main(){
    Node* n1 =new Node; // creat a new node 
    Node* head = n1;   // head is pointing to the first node .
    Node* n2 = new Node;  //new node
    Node* n3 = new Node;
    Node* n4 = new Node;


    n1->data = 40; //insert a data (a value ) to the first node.
    n1->next = n2; // point to the next node we created .

    n2->data = 500;
    n2->next = n3;

    n3->data = 60;
    n3->next =n4;

    n4->data = 71;
    n4->next = nullptr; // this mins the list is ended hear . 
                        // this point to the null value 
    
    cout<<n1->data<<endl;
    cout<<n1->next->data<<endl;
    cout<<n1->next->next->data<<endl;
    cout<<n1->next->next->next->data<<endl;
    // cout<<n1->next->next->next->next->data<<endl;   this will not give any output becaus the node is not exist .
}
