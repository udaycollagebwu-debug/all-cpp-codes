#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={1,3,4,5,6};
    cout <<"The size of the value :"<<v.size()<<endl;
    cout <<"The capacity is :"<<v.capacity()<<endl;
    cout<<"The vector element is :"<<endl;
    for(int valu : v){
        cout <<valu <<endl;
    }
    return 0;
}
