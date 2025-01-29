#include <iostream>

void set_null(int* &ptr) {
    delete ptr;
    ptr = nullptr;
}

int main() {
    int *p = new int(10);
    set_null(p);
    std::cout << "Pointer is null? " << (p == nullptr) << std::endl;
    return 0;
}
