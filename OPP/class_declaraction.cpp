#include <iostream>
using namespace std;

class Hospital
{
private:
    int patient_no, ward_no;
    string patient_name;

public:
    void register_print();
    void showstatus()
    {
        cout << patient_no << " : " << patient_name << " : " << ward_no << endl;
    }
};

void Hospital::register_print()
{
    cout << "Enter patient number: ";
    cin >> patient_no;
    cin.ignore(); // clear newline from buffer

    cout << "Enter patient name: ";
    getline(cin, patient_name);

    cout << "Enter ward number: ";
    cin >> ward_no;
}

int main()
{
    Hospital p1, p2;

    p1.register_print();
    p2.register_print();

    p1.showstatus();
    p2.showstatus();

    return 0;
}
