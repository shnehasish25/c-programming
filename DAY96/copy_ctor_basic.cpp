#include <iostream>

class Point {
public:
    int x, y;
    Point(int x, int y) : x(x), y(y) {}
    Point(const Point &p) : x(p.x), y(p.y) {
        std::cout << "Copy constructor called!\n";
    }
};

int main() {
    Point p1(10, 20);
    Point p2 = p1;
    std::cout << "p2: (" << p2.x << ", " << p2.y << ")\n";
    return 0;
}
