//
// Copyright 2021 NNTU-CS
// Performed by Dmitriy Gulin
// Group: 20-IST-2
//

int gcd(int a, int b) {
while (a != b)
{ if ( a > b)
{ a = a - b;
} else {
b = b - a;
}
}
return a;
}
