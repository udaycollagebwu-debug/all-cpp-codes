#include <iostream>
using namespace std;

class Fine {
public:
    int fine_condition(int speed);  // return true/false
};

int Fine::fine_condition(int speed) {
    if (speed > 140) {
        return true;   // fine condition met
    }
    else {
        return false;  // no fine
    }
}

int main() {
    int porsa_speed;
    Fine porsa;
    cout << "Enter the speed of the porsa car last night: ";
    cin >> porsa_speed;

    if (porsa.fine_condition(porsa_speed)) {
        cout << "You have a fine for driving at high speed.";
    }
    else {
        cout << "Good driver!";
    }

    return 0;
}
    