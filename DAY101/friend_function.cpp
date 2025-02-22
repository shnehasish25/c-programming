#include <iostream>

class Box {
private:
    double width;
public:
    Box(double w) : width(w) {}
    friend void print_width(const Box &b);
};

void print_width(const Box &b) {
    std::cout << "Width: " << b.width << std::endl;
}

int main() {
    Box b(12.5);
    print_width(b);
    return 0;
}
