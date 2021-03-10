// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    if (a != b)
        if (a > b)
            evk(a - b, b);
        else
            evk(a, b - a);
    else
        return a;
}
