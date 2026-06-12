// To check the palindrome string
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string intString, reversString, orginalString;
    cout << "Enter the string :";
    getline(cin, intString);
    orginalString = intString;
    // Build the reversed string safely using push_back()
    for (int i = static_cast<int>(intString.size()) - 1; i >= 0; --i)
    {
        reversString.push_back(intString[i]);
    }
    cout<<"The original string is :";
    cout<<orginalString<<endl;
    cout<<"The revers string is :";
    cout<<reversString<<endl;
    if (orginalString==reversString){
        cout<<"The string is a palindrome string .";
    }
    else{
        cout<<"The string is not a palindrome string .";
    }
    return 0;
}