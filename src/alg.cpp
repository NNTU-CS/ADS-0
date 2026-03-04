#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int perem = b;
        b = a % b;
        a = perem;
    }
    return a;
}

int main() {
    std::cout << gcd(10,15) << std::endl;
    return 0;
}
