#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b!= 0)
    {
            int flag = a;
            a = b;
            b = temp % b;
    }
    return a;
}
