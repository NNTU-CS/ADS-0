// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    // поместить сюда текст реализации алгоритма (на С++)
    if ( a == b ) {
        return a;
    } else {
        do {
         if ( a > b ) {
            a = a - (a / b) * b;
             return a;
            } else {
             b = b - (b / a) * a;
             return b;
            }
        } while ((a != 0) || (b != 0));
    }
}
