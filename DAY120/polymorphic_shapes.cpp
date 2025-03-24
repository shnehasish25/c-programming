#include <iostream>

class Shape {
public:
    virtual double area() const { return 0.0; }
    virtual ~Shape() {}
};

class Square : public Shape {
    double side;
public:
    Square(double s) : side(s) {}
    double area() const override { return side * side; }
};

int main() {
    Shape *s = new Square(5.0);
    std::cout << "Area: " << s->area() << std::endl;
    delete s;
    return 0;
}
