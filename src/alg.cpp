// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int min = a > b ? b : a;
    int max = a > b ? a : b;
    for (int i = min; i > 0; i--) {
        if (max % i == 0) return i;
    }
    return 1;
}
