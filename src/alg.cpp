// Copyright 2021 NNTU-CS
#include <iostream>
#include "alg.h"

int gcd(int a, int b) {
    int predel = (a > b) ? b : a;
    int nod = 0;
    for (int i = 1; i <= predel; i++) {
        if ((a % i == 0) && (b % i == 0)) {
            nod = i;
        }
    }
    return nod;
}

int main() {
    std::cout << gcd(10, 15) << std::endl;
    return 0;
}
