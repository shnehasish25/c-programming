#include <iostream>

template <typename T>
T get_max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    std::cout << "Max int: " << get_max(10, 20) << std::endl;
    std::cout << "Max double: " << get_max(3.14, 2.71) << std::endl;
    return 0;
}
