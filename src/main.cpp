// Copyright 2021 NNTU-CS
#include <iostream>

#include "alg.h"

int gcd(int a, int b) {
  while (b) {
    a %= b;
    std::swap(a, b);
  }
  return a;
}
