// Copyright 2021 NNTU-CS

int cbinsearch(int* arr, int size, int value) {
  int quantity = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] == value) {
      quantity++;
    }
  }
  return quantity;
}
