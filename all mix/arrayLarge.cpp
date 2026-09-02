//Largest element in an array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the array element one by one ."<<endl;
    for (int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<" element :";
        cin>>arr[i];
    }
    int large=arr[0];
    for(int i=1;i<n;i++){
        if(large<arr[i]){
            large=arr[i];
        }
    }
    cout<<"The largest element in the array is : "<<large<<endl;
    return 0;
}