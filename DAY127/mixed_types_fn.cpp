#include <iostream>

template <typename A, typename B>
auto add_mixed(A a, B b) -> decltype(a + b) {
    return a + b;
}

int main() {
    std::cout << "Sum: " << add_mixed(5, 3.2) << std::endl;
    return 0;
}
