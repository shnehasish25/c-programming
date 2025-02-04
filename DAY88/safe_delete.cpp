#include <iostream>

int main() {
    int *ptr = new int(100);
    delete ptr;
    ptr = nullptr;
    // deleting nullptr is safe in C++
    delete ptr;
    std::cout << "Safe delete complete\n";
    return 0;
}
