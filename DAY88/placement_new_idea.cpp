#include <iostream>
#include <new>

int main() {
    alignas(int) char buf[sizeof(int)];
    int *p = new (buf) int(42);
    std::cout << "Placed in stack buffer: " << *p << std::endl;
    return 0;
}
