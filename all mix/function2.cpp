#include <iostream>
using namespace std;
int returnType(int numb)
{
    if (numb % 2 == 0)
    {
        return 2;
    }
    else{
        return 1;
    }
}
int main()
{
    int number;
    cout << "Enter a number for the farther :";
    cin >> number;
    int result = returnType(number);
    if(result==2){
        cout<<"The number is even number .so you get a extera point fo this.JUST KIDING BRO";
    }
    else if(result==1){
        cout<<"The number thet you enterd is a odd number.so you are geting a multi natanal point .BRO YOU ARE THE PRO !";
    }
    else{
        cout<<"THE THINK THET YOU ENTERD IS NOT A NUMBER SO PLISE ENTER A NUMBER ";
    }
    return 0;
}