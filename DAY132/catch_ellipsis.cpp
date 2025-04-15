#include <iostream>

int main() {
    try {
        throw "Unexpected error";
    } catch (...) {
        std::cout << "Caught by catch-all ellipsis (...) block\n";
    }
    return 0;
}
