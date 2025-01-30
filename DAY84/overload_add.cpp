#include <iostream>

int add(int a, int b) { return a + b; }
double add(double a, double b) { return a + b; }
int add(int a, int b, int c) { return a + b + c; }

int main() {
    std::cout << add(3, 4) << std::endl;
    std::cout << add(2.5, 4.5) << std::endl;
    std::cout << add(1, 2, 3) << std::endl;
    return 0;
}
