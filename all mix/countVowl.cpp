// count the vowel and consonent in a string
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string sample;
    cout << "Enter the string for count the vowels :";
    getline(cin, sample);
    char start = sample[0];
    int countVow = 0, countCon = 0;
    for (int i = 0; i < sample.size(); i++)
    {
        char start = sample[i];
        if (start == 'a' || start == 'e' || start == 'i' || start == 'o' || start == 'u' || start == 'A' || start == 'E' || start == 'I' || start == 'O' || start == 'U')
        {
            countVow++;
        }
        else
        {
            if (start == ' ')
            {
               continue;
            }
            countCon++;
        }
    }
    cout << "The vowel count from the string is :" << countVow << endl;
    cout << "The consonent count from the string is :" << countCon << endl;
    return 0;
}