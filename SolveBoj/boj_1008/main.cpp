#include <iostream>

int main(void) {

    double a, b;
    std::cin >> a >> b;

    std::cout.precision(12);
    std::cout << std::fixed;

    std::cout << a / b;


    return 0;
}