#include<iostream>
using namespace std;
int print_numbers(int start,int end, int arr[]){
    int size=end-start;
    int i=0;
    while(start <= end){
        arr[i++]=start;
        start++;
    }
    return i;

}
int main(){
    int starting,ending,size;
    cout<<"Enter the starting numer :";
    cin>>starting;
    cout<<"Enter the ending of the number :";
    cin>>ending;

    size=ending-starting+1;
    int nactural_numbers[size];

    if (starting > ending) {
        cout << "Error: Starting number cannot be greater than ending number!" << endl;
        return 1; // exit with error code
    }
    
    int count=print_numbers(starting,ending,nactural_numbers);
    cout<<"The numbers from "<<starting<<" to "<<ending<<" is :";
    for (int i=0;i<size;i++){
        cout<<nactural_numbers[i]<<" ";
    }
    return 0;
}
