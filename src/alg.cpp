// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    if (b == 0)
        return a;
    if (a > b)
        return gcd (b, a % b);
    else
        return gcd (a, b % a);
}
