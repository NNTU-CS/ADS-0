// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    while (a != b) {
        if (a > b)
            a = a - b;
        else if (a < b)
            b = b - a;
    }
    return a;
}
