#include <iostream>
using namespace std;
int main(void) {
    int h, m, t;
    cin >> h >> m >> t;

    m = m + t;

    if (m > 59) {
        h += m / 60;
        m = m % 60;
    }
    if (h > 23) {
        h = h % 24;
    }

    cout << h << ' ' << m;

    return 0;
}

// 119 / 60 = 1