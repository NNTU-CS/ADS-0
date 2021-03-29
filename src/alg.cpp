// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
                int res;
        while ((b != 0) && (a != 0)) {
                if (a > b)
        a -= b;
                else
        b -= a;
        }
        res = a + b;
                return res;
        }
