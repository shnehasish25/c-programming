#include <iostream>

void print_val(const int &x) {
    std::cout << "Value: " << x << "\n";
}

int main() {
    print_val(42);
    return 0;
}
