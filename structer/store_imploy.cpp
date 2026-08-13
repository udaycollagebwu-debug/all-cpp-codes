#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct  employ
{
    int ImployID;
    string name;
    float salary;
    string phone_Number;
};

int main(){
    int number_employ;
    cout<<"Enter how many employ details you store :";
    cin>>number_employ;

    vector<employ> em(number_employ);
    
    for(int i = 0;i<number_employ;i++){ // take input
        cout<<"Enter Employ ID :";
        cin>>em[i].ImployID;
        cin.ignore();
        cout<<"Enter Name: ";
        getline(cin,em[i].name);
        cout<<"Enter salary : ";
        cin>>em[i].salary;
        cin.ignore();
        cout<<"Enter Phone number :";
        getline(cin,em[i].phone_Number); //take input 10 digit input but it can store "kahdfk" also ,mins the alphabates .
        if(em[i].phone_Number.length() != 10){
            cout<<"Envalid number !."<<endl;
            cout<<"Enter the phone number again :";
            getline(cin,em[i].phone_Number);
        }
    }
    //out put 

    for (int i = 0;i < number_employ;i++){
        cout<<"EMPLOY "<<i+1 <<endl;
        cout<<"Name        : "<<em[i].name<<endl;
        cout<<"Imploy ID   : "<<em[i].ImployID<<endl;
        cout<<"Salary      : "<<em[i].salary<<endl;
        cout<<"Phone nmber : "<<em[i].phone_Number<<endl;
    }

    return 0;
}
