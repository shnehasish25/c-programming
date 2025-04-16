#include <iostream>
#include <stdexcept>

void risky_operation() {
    throw std::runtime_error("System failed during processing");
}

int main() {
    try {
        risky_operation();
    } catch (const std::runtime_error &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
