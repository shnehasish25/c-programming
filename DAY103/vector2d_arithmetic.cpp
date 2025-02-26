#include <iostream>

class Vec2 {
public:
    float x, y;
    Vec2(float x = 0, float y = 0) : x(x), y(y) {}
    Vec2 operator-(const Vec2 &o) const { return Vec2(x - o.x, y - o.y); }
};

int main() {
    Vec2 v1(10, 20), v2(3, 5);
    Vec2 v3 = v1 - v2;
    std::cout << "(" << v3.x << ", " << v3.y << ")\n";
    return 0;
}
