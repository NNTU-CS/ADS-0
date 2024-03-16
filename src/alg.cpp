// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
        // поместить сюда текст реализации алгоритма (на С++)
  int b = 0, c = 5;
  while (a != 0 && b != 0) {
    if (a > b) {
     a = a - b;
    } else if (a <= b) {
     b = b - a;
    }
  }
    if (a != 0)
     return a;
    else
     return b;
}
