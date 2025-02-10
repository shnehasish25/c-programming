#include <iostream>

class Sphere {
    double r;
public:
    Sphere(double r) : r(r) {}
    double volume() { return (4.0 / 3.0) * 3.14159 * r * r * r; }
};

int main() {
    Sphere s(3.0);
    std::cout << "Sphere vol: " << s.volume() << std::endl;
    return 0;
}
