#include<iostream>
#include<vector>
using namespace std;

// i use a class to print the highest marks 
class Marks {
    public:
    vector<int>marks;
    void heigst(){
        int size = marks.size();
        int top=marks[0];
        for (int i = 1 ;i <size;i++){
            if (top < marks[i]){
                top = marks[i];
            }
        }
        cout<<"The big number is :"<<top<<endl;
    }
};

int main(){
    int size;
    Marks m1;
    cout<<"Enter the how many element you want to store :";
    cin>>size;
     for(int i=0;i<size;i++){
        int number;
        cout<<"Enter the "<<i+1<<" number :";
        cin>>number;
        m1.marks.push_back(number);
    }
    m1.heigst();
    return 0;
}