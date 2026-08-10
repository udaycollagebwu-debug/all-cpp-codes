#include <iostream>
using namespace std;
class Factorial
{
public:
    int number;
    void result()
    {
        int ans = 1;
        if (number < 0){
            cout<<"The result is not exist !"<<endl;
        }
        else{
            for (int i = 1; i<= number;i++){
                ans *= i;
            }
            cout <<" The factorial of "<<number<<" is : "<<ans<<endl;
        }
    }
};
int main(){
    Factorial n1;
    cout<<"Enter the number :";
    cin>>n1.number;
    n1.result();
    return 0;
}