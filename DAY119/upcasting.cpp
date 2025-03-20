#include <iostream>

class Shape {};
class Circle : public Shape {};

void render(Shape *s) {
    std::cout << "Rendering shape...\n";
}

int main() {
    Circle c;
    render(&c); // upcasting is automatic
    return 0;
}
