#include <iostream>
using namespace std;
int main(void) {
    int a;

    cin >> a;

    if (a <= 100 && a >= 90) {
        cout << "A";
    }
    else if (a < 90 && a >= 80) {
        cout << "B";
    }
    else if (a < 80 && a >= 70) {
        cout << "C";
    }
    else if (a < 70 && a >= 60) {
        cout << "D";
    }
    else if (a < 60) {
        cout << "F";
    }
    else {
        cout << "F";
    }
    return 0;
}