#include <iostream>

class Target {
    int x, y;
public:
    Target(int x, int y) : x(x), y(y) {}
    Target() : Target(0, 0) {} // delegating constructor
    void show() { std::cout << "(" << x << ", " << y << ")\n"; }
};

int main() {
    Target t;
    t.show();
    return 0;
}
