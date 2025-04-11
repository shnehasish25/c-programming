#include <iostream>

template <typename T>
struct IsPointer { static const bool val = false; };

template <typename T>
struct IsPointer<T*> { static const bool val = true; };

int main() {
    std::cout << "int is ptr: " << IsPointer<int>::val << "\n";
    std::cout << "int* is ptr: " << IsPointer<int*>::val << "\n";
    return 0;
}
