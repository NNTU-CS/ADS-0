// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    // поместить сюда текст реализации алгоритма (на С++)
        if (a != b)
        if (a > b)
            gcd(a - b, b);
        else
            gcd(a, b - a);
    else
        return a;
}
