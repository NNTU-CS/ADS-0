// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int max = a;
    int min = b;
    if (b > max){
        max = b;
        min = a;
    }
    while (max % min){
        max = min;
        min = max % min;
    }
    return min;
}
