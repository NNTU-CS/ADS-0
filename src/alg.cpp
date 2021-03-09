// Copyright 2021 NNTU-CS
int gcd(int a, int b) {
    int c;
    while (!(a % b) == 0) {
        c = a;
        a = b;
        b = c % b;
}
    return b;
}
