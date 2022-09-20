#include <iostream>
using namespace std;
int main(void) {
    int a, b, sum;
    cin >> a;
    cin >> b;
    int b1, b2, b3;
    b1 = a * (b % 10);
    b2 = a * ((b % 100) / 10);
    b3 = a * (b / 100);

    sum = a * b;

    cout << b1 << endl;
    cout << b2 << endl;
    cout << b3 << endl;
    cout << sum;

    return 0;
}