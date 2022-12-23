#include <iostream>
using namespace std;
int subject[1001] = { 0 };

int main(void) {
    int n, m = -1000;
    double result = 0.0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> subject[i];
        if (subject[i] > m) {
            m = subject[i];
        }
        result += subject[i];
    }
    result = (float)(result / m * 100) / n;
    
    cout << fixed;
    cout.precision(6);
    cout << result;

    return 0;
}