#include <iostream>

class Circle {
private:
    double radius;
public:
    void set_radius(double r) { radius = r; }
    double area() { return 3.14159 * radius * radius; }
};

int main() {
    Circle c;
    c.set_radius(3.0);
    std::cout << "Circle Area: " << c.area() << std::endl;
    return 0;
}
