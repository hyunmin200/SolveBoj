#include <iostream>
using namespace std;

int main(void) {
    int val[10] = { 1, 1, 2, 2, 2, 8 };

    int input[10];
    for (int i = 0; i < 6; i++) {
        cin >> input[i];
    }

    for (int i = 0; i < 6; i++) {
        cout << val[i] - input[i] << ' ';
    }

    return 0;
}