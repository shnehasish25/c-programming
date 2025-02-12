#include <iostream>

class Point {
public:
    int x, y;
    Point(int x_val, int y_val) : x(x_val), y(y_val) {}
};

int main() {
    Point p(15, 25);
    std::cout << "(" << p.x << ", " << p.y << ")\n";
    return 0;
}
