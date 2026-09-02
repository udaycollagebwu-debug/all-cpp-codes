#include <iostream>
using namespace std;

int hight(int age) {
    if (age <= 0) {
        return 0;
    }
    if (age <= 2) {
        return 75;
    }
    if (age <= 4) {
        return 100;
    }
    if (age <= 7) {
        return 120;
    }
    if (age <= 10) {
        return 130;
    }
    if (age <= 13) {
        return 145;
    }
    if (age <= 16) {
        return 165;
    }
    return 170 + (age - 16);
}

void hightCalculater() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    int estimatedHeight = hight(age);
    if (estimatedHeight > 0) {
        cout << "Your height is: " << estimatedHeight << " cm" << endl;
    } else {
        cout << "Please enter a valid age." << endl;
    }
}

int main() {
    hightCalculater();
    return 0;
}
