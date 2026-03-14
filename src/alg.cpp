// Copyright 2021 NNTU-CS
// Copyright 2021 NNTU-CS
#include "alg.h"

#include <utility>

int gcd(int a, int b) {
  while (b) {
    a %= b;
    std::swap(a, b);
  }
  return a;
}
