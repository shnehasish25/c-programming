#include <iostream>
#include <memory>

class Widget {};

std::unique_ptr<Widget> create_widget() {
    return std::make_unique<Widget>();
}

int main() {
    auto w = create_widget();
    std::cout << "Factory created widget successfully\n";
    return 0;
}
