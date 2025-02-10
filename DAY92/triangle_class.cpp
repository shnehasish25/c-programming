#include <iostream>

class Triangle {
    double b, h;
public:
    Triangle(double b, double h) : b(b), h(h) {}
    double area() { return 0.5 * b * h; }
};

int main() {
    Triangle t(6, 4);
    std::cout << "Triangle area: " << t.area() << std::endl;
    return 0;
}
