// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    // поместить сюда текст реализации алгоритма (на С++)
    if (a == b) {
        return a;
    }
    if (a > b) {
        return gcd(a - b, b);
    } else {
        return gcd(a, b - a);
    }
}
