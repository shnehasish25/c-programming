#include <iostream>

inline int square(int x) {
    return x * x;
}

int main() {
    std::cout << "Square of 8 is " << square(8) << std::endl;
    return 0;
}
