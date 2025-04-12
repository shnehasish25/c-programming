#include <iostream>

int main() {
    try {
        std::cout << "In try block\n";
        throw 20;
    } catch (int e) {
        std::cout << "Caught exception code: " << e << std::endl;
    }
    return 0;
}
