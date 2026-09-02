#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number of size that holds :";
    cin>>num;
    int list_number[num];
    for(int i=0;i<num;i++){
        cout<<"Enter the "<<i+1<<" number:";
        cin>>list_number[i];
    }
    cout<<"The array is : ";
    for(int i=0;i<num;i++){
        cout<<list_number[i]<<"\t";
    }
    cout<<endl;
    int sum=0;
    for(int i=0;i<num;i++){
        sum+=list_number[i];
    }
    cout<<"The sum of all element of the array is :";
    cout<<sum;
    return 0;
}