// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int div;
    int c = a - b;
    if (a == b) {
        return a;
    }
    if (c < 0) {
        c = -c;
        div = gcd(a, c);
    } else {
        div = gcd(b, c);
    }
    return div;
}
