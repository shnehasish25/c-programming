#include <iostream>

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int main() {
    int num = 6, den = 8;
    int g = gcd(num, den);
    std::cout << "Simplified: " << num / g << "/" << den / g << std::endl;
    return 0;
}
