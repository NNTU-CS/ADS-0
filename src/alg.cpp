// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
if (a % b == 0 || b % a == 0) {
if (a > b)
return b;
else
return a;
} else {
if(a > b)
return a % b;
else
return b % a;
}
}
