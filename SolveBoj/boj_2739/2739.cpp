#include <iostream>
using namespace std;
int main(void) {
    int a, sum;
    cin >> a;

    for (int i = 1; i <= 9; i++) {
        sum = a * i;
        cout << a << " * " << i << " = " << sum << endl;
    }

    return 0;
}