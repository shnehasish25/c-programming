#include <iostream>

class Vector2 {
public:
    float x, y;
    Vector2(float x=0, float y=0) : x(x), y(y) {}
    Vector2 operator*(float k) const { return Vector2(x*k, y*k); }
};

int main() {
    Vector2 v(2.0, 3.5);
    Vector2 scaled = v * 2.0;
    std::cout << scaled.x << ", " << scaled.y << std::endl;
    return 0;
}
