#include <iostream>
#include <new>

int main() {
    int *p = new (std::nothrow) int[100];
    if (p) {
        std::cout << "Allocation succeeded without exceptions\n";
        delete[] p;
    }
    return 0;
}
