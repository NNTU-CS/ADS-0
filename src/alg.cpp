// Copyright 2021 NNTU-CS

#include <algorithm>
#include <cstdint>

bool isPrime(uint64_t n) {
  if (n < 2) return false;
  for (uint64_t i = 2; i * i <= n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

uint64_t nextPrime(uint64_t n) {
  uint64_t next = n + 1;
  while (!isPrime(next)) {
    next++;
  }
  return next;
}

int gcd(int a, int b) {
  while (b) {
    a %= b;
    std::swap(a, b);
  }
  return a;
}
