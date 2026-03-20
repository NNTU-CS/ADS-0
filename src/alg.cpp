// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    while (b != 0) {
		int date = b;
		b = a % b;
		a = date;
	}
	return a;
}
