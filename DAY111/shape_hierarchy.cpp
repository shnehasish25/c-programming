#include <iostream>

class Shape2D {
public:
    void render() { std::cout << "Rendering 2D Shape\n"; }
};

class Polygon : public Shape2D {};

int main() {
    Polygon p;
    p.render();
    return 0;
}
