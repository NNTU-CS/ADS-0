// Copyright 2021 NNTU-CS
#include "alg.h"

int gcd(int a, int b) {
  while (b != 0) {
    int value = b;
    b = a%b;
    a = value;
  }
  return a;
}
