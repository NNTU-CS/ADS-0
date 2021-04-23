// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    // поместить сюда текст реализации алгоритма (на С++)
  int c;
  while (b != 0) {
    c = b;
    b = a % b;
    a = c;
  }
  return a;
}
