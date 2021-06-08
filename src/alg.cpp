// Copyright 2021 NNTU-CS
#include "alg.h"
int gcd(int a, int b) {
    int с;
    if (a < b) {
        с = a; a = b; b = с;
    }
    while(a != b) {
      с = a % b;
      if (с == 0) break;
      a = b;
      b = с;
    }
    return(b);
}
