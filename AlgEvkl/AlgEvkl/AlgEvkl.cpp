#include <iostream>

int main()
{

}

int gcd(int a, int b) {
    while (b != a) {
        if (a > b)
        {
            a = a - b;
        }
        else {
            b = b - a;
        }
    }
    return a;
}