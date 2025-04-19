#include <iostream>
#include <array>

int main() {
    std::array<int, 4> a = {1, 3, 5, 7};
    std::cout << "Size: " << a.size() << ", front: " << a.front() << std::endl;
    return 0;
}
