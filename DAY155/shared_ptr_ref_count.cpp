#include <iostream>
#include <memory>

class Widget {
public:
    ~Widget() { std::cout << "Widget deleted when ref count hit 0\n"; }
};

int main() {
    auto w1 = std::make_shared<Widget>();
    auto w2 = w1;
    return 0;
}
