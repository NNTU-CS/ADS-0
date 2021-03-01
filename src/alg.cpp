// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
                int res;
        while ((a != 0) && (b != 0)) {
                if (a > b)
        a -= b;
                else
        b -= a;
        }
        res = a + b;
                return res;
        }
