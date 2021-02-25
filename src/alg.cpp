// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    // поместить сюда текст реализации алгоритма (на С++)
int t;
while (b != 0) {
t = b;
b = a % b;
a = t;
}
return a;
}
