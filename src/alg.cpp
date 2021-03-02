// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    return b ? gcd (b, a % b) : a;
}
