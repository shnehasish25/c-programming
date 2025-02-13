#include <iostream>

class Box {
public:
    int width, height, depth;
    Box() : width(1), height(1), depth(1) {}
    Box(int s) : width(s), height(s), depth(s) {}
    Box(int w, int h, int d) : width(w), height(h), depth(d) {}
    int volume() { return width * height * depth; }
};

int main() {
    Box b1;
    Box b2(5);
    Box b3(2, 3, 4);
    std::cout << b1.volume() << " " << b2.volume() << " " << b3.volume() << "\n";
    return 0;
}
