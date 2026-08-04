// Define a struct Book with title, author, price.
// Store details of n books and print all books cheaper than a given price.

#include<iostream>
using  namespace std;

struct Book
{
    char title[50];
    char author[30];
    float price;
};
int main (){
    int no_books;
    cout<<"Ente the noumber of books you want to store :";
    cin>>no_books;
    Book n[no_books];// store the books provided by the user .

    for(int i=0;i<no_books;i++){   // to take input of the books 
        cout<<"Enter the Title of the "<<i+1<<" book :";
        cin.ignore();  //remoeve the \n line 
        cin.getline(n[i].title,50);
        cout<<"Enter the author name of the "<<i+1<<" book :";
        cin.getline(n[i].author,30);
        cout<<"Enter the prize of the "<<i+1<<" book :";
        cin>>n[i].price;
    }
    int check_out;
    cout<<"Enter the prize you want to checkout :";
    cin>>check_out;
    for(int i=0;i<no_books;i++){ //print the output 
        if(n[i].price < check_out){
            cout<<"Book Titel : "<<n[i].title<<endl;
            cout<<"Book Author : "<<n[i].author<<endl;
            cout<<"Book Prize : "<<n[i].price<<endl;
            cout<<"===================000===================="<<endl;
        }
    }
    return 0;
}
