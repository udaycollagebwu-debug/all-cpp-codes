#include<iostream>
using namespace std;
struct  Node
{
    int data;
    Node* nextNode;

    // value insert
    Node(int value){
        data = value;
        nextNode = nullptr;
    }
};

int main(){
    Node* n1 = new Node(5);
    Node* n2 = new Node(10);

    Node* head = n1;
    n1->nextNode =n2;

    Node* temp = head;
   while (temp != nullptr)
   {
    cout<<temp->data<< " ";
    temp= temp->nextNode;
   }


    return 0;
}
