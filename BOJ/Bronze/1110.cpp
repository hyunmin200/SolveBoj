#include <iostream>
using namespace std;
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, check, count = 0;

    cin >> n;
    check = n;

    do {
        n = (n % 10) * 10 + ((n / 10) + (n % 10)) % 10;

        count++;
    } while (n != check);

    cout << count;

    return 0;
}