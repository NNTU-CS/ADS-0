// Copyright 2021 NNTU-CS
#include <iostream>
#include "alg.h"


int gcd(int a, int b) {
	while(b != 0){
		int temp = b;
		b = a % b;
		a = temp;
	}
	return abs(a);
}
int main() {
    std::cout << gcd(10,15) << std::endl;
    return 0;
}
