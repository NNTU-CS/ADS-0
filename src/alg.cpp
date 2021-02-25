// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    while (a != 0 && b != 0)
        if (a > b) {
            a = a % b;
        } else {
        b = b % a;
        }
    if (a == 0 && b == 0) {
        return 0;
    } else if (a == 0 && b > 0) {
        return b;
    } else {
        return a;
    }
}
