#include <iostream>

class Shape {
protected:
    int color_code = 1;
};

class Square : public Shape {
public:
    void show_color() { std::cout << "Color: " << color_code << std::endl; }
};

int main() {
    Square s;
    s.show_color();
    return 0;
}
