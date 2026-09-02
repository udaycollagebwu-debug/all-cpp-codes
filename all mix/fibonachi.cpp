// fibonacci sirise
// fibonacci number sirise is a serise that is the sum of the privious 2 numbers
#include <iostream>
using namespace std;
int main()
{
    int turns;
    int start1 = 0, start2 = 1,sum=0;
    cout << "Enter the nubers of turm that you want :";
    cin >> turns;
    cout << "The fibionacci number sirise is : " << endl;
    cout << start1 << ", " << start2;
    for (int i = 2; i < turns; i++)
    {
        sum=start1 + start2;
        cout << ", "<< sum ;
        start1=start2;
        start2=sum;
    }
    cout<<"\n";
    return 0;
}