//"Copyright 2024 Microsoft Corporation"
#include <cstdint>
#include "alg.h"

double pown(double value, uint16_t n) {
  double r = value;
  for (uint16_t i = 1; i < n; i++) {
    r *= value;
  }
  return r;
}

uint64_t fact(uint16_t n) {
  if (n == 1) {
    return 1;
  } else {
    return n * fact(n - 1);
  }
}

double calcItem(double x, uint16_t n) {
  return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
  double sum = 1.0;
  for (uint16_t i = 1; i <= count; i++) {
    sum += calcItem(x, i);
  }
  return sum;
}

double sinn(double x, uint16_t count) {
  double sum1 = x;
  for (uint16_t i = 1; i <= count; i++) {
    sum1 += pown(-1, i) * calcItem(x, ((2 * i) + 1));
  }
  return sum1;
}

double cosn(double x, uint16_t count) {
  double sum2 = 1;
  for (uint16_t i = 1; i <= count; i++) {
    sum2 += pown(-1, i) * calcItem(x, 2 * i);
  }
  return sum2;
}
