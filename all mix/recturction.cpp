//factorial of a number using recturction
#include<iostream>
using namespace std;
int recturction(int num){
    if (num==0 || num ==1){
        return 1;
    }
    return num*recturction(num-1);
}
int main(){
    int number;
    cout<<"Enter the number you want factioriyal :";
    cin>>number;
    int ans=recturction(number);
    cout<<"The factoriyal of "<<number<<" is :"<<ans;
    return 0;
}