#include <stdio.h>

int main() {
    int a = 24, b = 36;
    int x = a, y = b;
    while (y != 0) { int t = y; y = x % y; x = t; }
    int gcd = x;
    int lcm = (a * b) / gcd;
    printf("a=%d, b=%d -> GCD=%d, LCM=%d, (GCD*LCM == a*b): %d\n",
           a, b, gcd, lcm, (gcd * lcm == a * b));
    return 0;
}
