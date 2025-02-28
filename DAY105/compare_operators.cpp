#include <iostream>

class Box {
    int vol;
public:
    Box(int v) : vol(v) {}
    bool operator==(const Box &o) const { return vol == o.vol; }
    bool operator<(const Box &o) const { return vol < o.vol; }
};

int main() {
    Box b1(50), b2(50), b3(80);
    std::cout << "b1 == b2: " << (b1 == b2) << "\n";
    std::cout << "b1 < b3: " << (b1 < b3) << "\n";
    return 0;
}
