#include <iostream>

template <typename T1, typename T2>
void display_pair(T1 first, T2 second) {
    std::cout << "[" << first << ", " << second << "]\n";
}

int main() {
    display_pair(101, "Alex");
    display_pair("Price", 49.99);
    return 0;
}
