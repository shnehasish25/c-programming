#include <iostream>

template <typename T>
class Box {
    T item;
public:
    Box(T i) : item(i) {}
    T open() { return item; }
};

int main() {
    Box<std::string> b("Surprise");
    std::cout << b.open() << std::endl;
    return 0;
}
