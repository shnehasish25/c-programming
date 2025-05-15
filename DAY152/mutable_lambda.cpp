#include <iostream>

int main() {
    int count = 0;
    auto counter = [count]() mutable {
        return ++count;
    };
    std::cout << counter() << " " << counter() << std::endl;
    return 0;
}
