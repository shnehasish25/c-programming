#include <iostream>

class Vec3 {
public:
    int x, y, z;
    Vec3(int x=0, int y=0, int z=0) : x(x), y(y), z(z) {}
    int dot(const Vec3 &o) const { return x*o.x + y*o.y + z*o.z; }
};

int main() {
    Vec3 a(1, 2, 3), b(4, 5, 6);
    std::cout << "Dot product: " << a.dot(b) << std::endl;
    return 0;
}
