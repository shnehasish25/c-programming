#include <iostream>

class Rectangle {
private:
    double width, height;

public:
    void set_dims(double w, double h) { width = w; height = h; }
    double area() { return width * height; }
    double perimeter() { return 2 * (width + height); }
};

int main() {
    Rectangle r;
    r.set_dims(5.0, 4.0);
    std::cout << "Area: " << r.area() << ", Peri: " << r.perimeter() << std::endl;
    return 0;
}
