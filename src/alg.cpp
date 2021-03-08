// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
while(a != b) {
a > b ? a -= b : b -= a;
}
return a;
}
