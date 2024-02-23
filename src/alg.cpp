// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    // поместить сюда текст реализации алгоритма (на С++)
    int max;
    int count;
    if (a > b) {
        max = a;
    } else {
        max = b;
    }
    if (a == b) max = a;
    for (int i = 1; i <= max; i++) {
        if ((a % i == 0) && (b % i == 0)) count = i;
    }
    return count;
}
