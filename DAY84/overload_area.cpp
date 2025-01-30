#include <iostream>

double area(double r) { return 3.14159 * r * r; }
double area(double l, double w) { return l * w; }

int main() {
    std::cout << "Circle: " << area(5.0) << ", Rect: " << area(4.0, 6.0) << "\n";
    return 0;
}
