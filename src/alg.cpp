// Copyright 2021 NNTU-CS.

int gcd (int a, int b) {
    if (a == 0)
         return b;
    else
         return gcd(a, b % a);
}

