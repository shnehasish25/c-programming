#include <iostream>

class Point {
public:
    int x, y;
    Point(int x, int y) : x(x), y(y) {}
    Point operator+(const Point &o) const {
        return Point(x + o.x, y + o.y);
    }
};

int main() {
    Point p1(1, 2), p2(3, 4);
    Point p3 = p1 + p2;
    std::cout << p3.x << ", " << p3.y << std::endl;
    return 0;
}
