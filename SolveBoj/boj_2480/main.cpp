#include <iostream>
using namespace std;
int main(void) {
    int a, b, c, cost;

    cin >> a >> b >> c;

    if (a == b && b == c && a == c) {
        cost = 10000 + a * 1000;
    }
    else if (a == b) {
        cost = 1000 + a * 100;
    }
    else if (a == c) {
        cost = 1000 + a * 100;
    }
    else if (b == c) {
        cost = 1000 + b * 100;
    }
    else {
        if (a > b && a > c) {
            cost = a * 100;
        }
        else if (b > a && b > c) {
            cost = b * 100;
        }
        else {
            cost = c * 100;
        }
    }

    cout << cost;

    return 0;
}
