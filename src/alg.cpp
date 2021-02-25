// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
  if (a == 0)
    return b;
  return gcd(b%a, a);
}
