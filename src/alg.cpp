// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int n = 1;
    for (int i = 1; i < b; i++)
        if (a % i == 0 && b % i == 0)
            n = i;
    return n;
}
