// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int arr1[200] = { 0 };
int arr2[200] = { 0 };
int w = 0, s = 0;
if (a == 0 && b == 0) return 0;

for (int i = 1; i < 200; i++) {
    if ((a % i) == 0) {
        arr1[w] = i;
        w++;
    }
    if ((b % i) == 0) {
        arr2[s] = i;
        s++;
    }
}

for (int i = 199; i >= 0; i--) {
    if ((arr1[i] == arr2[i]) && (arr1[i] !=0 || arr2[i] != 0)) {
        return arr1[i];
    }
}
return 0;
}
