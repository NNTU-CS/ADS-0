// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    for (int i = a / 2; i >= 2; i--) {
        if (a % i == 0 && b % i == 0) {
            return i;
        }
    }
    return 1;
}
