// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int c = 1;
    int z = (a > b) ? a : b;
    for (int i = 1; i <= z; ++i) {
        if ((a % i == 0) && (b % i == 0))
            c = i;
    }
    return c;
}
