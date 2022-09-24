#include <iostream>
using namespace std;
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x = 0, a;
    cin >> n >> x;

    for (int i = 1; i <= n; i++) {
        cin >> a;
        if (x > a) {
            cout << a << " ";
        }
    }

    return 0;
}