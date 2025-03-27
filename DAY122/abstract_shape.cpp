#include <iostream>

// Abstract base class
class Shape {
public:
    virtual double area() const = 0; // pure virtual
    virtual void draw() const = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
    double r;
public:
    Circle(double r) : r(r) {}
    double area() const override { return 3.14159 * r * r; }
    void draw() const override { std::cout << "Drawing Circle\n"; }
};

int main() {
    Shape *s = new Circle(4.0);
    s->draw();
    std::cout << "Area: " << s->area() << std::endl;
    delete s;
    return 0;
}
