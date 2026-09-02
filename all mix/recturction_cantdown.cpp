#include<iostream>
using namespace std;
void cowndown(int last){
    if(last>0){
        cout<<last<<" ";
        cowndown (last-1);
    }
    else{

        cout<<endl<<"LATS GO !!!!!!";
    }
}
int main(){
    int number;
    cout<<"Enter the cowndon last  number :";
    cin>>number;
    cowndown(number);
    return 0;
}