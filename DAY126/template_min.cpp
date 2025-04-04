#include <iostream>

template <typename T>
T get_min(T a, T b) {
    return (a < b) ? a : b;
}

int main() {
    std::cout << "Min: " << get_min(15, 8) << std::endl;
    return 0;
}
