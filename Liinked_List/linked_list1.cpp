#include <iostream>
using namespace std;
// to creat a node structer
struct node
{
    int data;
    node* next;
};

int main(){
    //to creat a new data .
    node* data1=new node;
    node* data2=new node;

    //assign valuse to the nodes 
    data1->data=20;
    data1->next=data2;

    data2->data=30;
    data2->next=nullptr;
    node* head=data1;

    //print the stored data .
    cout<<head->data<<endl;
    cout<<head->next->data<<endl;   
    return 0;
}