// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
if (a < b) {
int t = a;
a = b;
b = t;
}
while (b != 0) {
a = a % b;
int t = a;
a = b;
b = t;
}
return a;
}
