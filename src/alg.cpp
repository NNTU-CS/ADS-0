// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int c;
        while (b) {
        c = a % b;
        a = b;
        b = c;
    }
    return abs(a);
}
