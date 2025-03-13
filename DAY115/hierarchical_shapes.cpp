#include <iostream>

class Shape {
public:
    void draw() { std::cout << "Drawing shape\n"; }
};

class Circle : public Shape {};
class Rectangle : public Shape {};

int main() {
    Circle c; Rectangle r;
    c.draw();
    r.draw();
    return 0;
}
