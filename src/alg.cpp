// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int x = a % b;
    while (x != 0) {
        a = b;
        b = x;
        x = a % b;
    }
    return b;
}
