//the code is for taking input the values(numbers) and do sum of them
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int number,size;
    cout<<"Enter the how many numbers you want to sum :";
    cin>>size;
    vector<int>numbList;
    cout<<"Enter number one by one ."<<endl;
    for(int i=0;i<size;i++){
        cout<<"Enter the "<<i+1<<" number :";
        cin>>number;
        numbList.push_back(number);
    }
    int sum=0;
    for(int value : numbList){
        sum+=value;
    }
    cout<<"The sum of all vector element is :"<<sum<<endl;

    return 0;
}