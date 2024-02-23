// Copyright 2022 NNTU-CS

#include <iostream>

using std::cout;
using std::endl;

int gcd(int a, int b) {
    int c = 1; 
    int z = (a > b) ? a : b;
    for (int i = 1; i <= z; ++i) {
        if ((a % i == 0 && b % i == 0)) {
            c = i;
        }
    }
    return c;
}

int main() {
    int a, b;
    std::cin >> a;
    std::cin >> b;
    cout << gcd(a, b) << endl;
    return 0;
}
