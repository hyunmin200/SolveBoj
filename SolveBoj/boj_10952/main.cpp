#include <iostream>
using namespace std;
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;

    while (true) {
        cin >> a >> b;
        if (a != 0 && b != 0) {
            cout << a + b << "\n";
        }
        else {
            break;
        }
    }

    return 0;
}