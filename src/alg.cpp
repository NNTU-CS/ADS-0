// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int max = a;
    int min = b;
    int boofer;
    if (b > max) {
        max = b;
        min = a;
    }
    while (max && min) {
        max = max % min;
        if (min > max) {
            boofer = max;
            max = min;
            min = boofer;
        }
    }
    return max;
}
