// Copyright 2021 NNTU-CS
int gcd(int a, int b) {
    while (b != 0) {
        int k = b;
        b = a % b;
        a = k;
    }
    return a;
}