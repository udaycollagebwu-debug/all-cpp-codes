#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int students;
    vector<string> names;
    vector<int> marks;

    cout << "Enter the number of students you want to store: ";
    cin >> students;
    cin.ignore(); // clear newline left in buffer

    for (int i = 0; i < students; i++)
    {
        string name;
        int mark;
        cout << "For student :" << i + 1 << endl;
        cout << "Enter the name of the student: ";
        getline(cin, name);
        names.push_back(name);

        cout << "Enter the marks of the student: ";
        cin >> mark;
        marks.push_back(mark);

        cin.ignore(); // clear newline again for next getline
    }

    // Print the input
    for (int i = 0; i < students; i++)
    {
        cout << "Student :" << i + 1 << endl;
        cout << "Name : " << names[i] << endl;
        cout << "Marks : " << marks[i] << endl;
    }

    return 0;
}
