#include <iostream>
#include <string>

int main() {
    try {
        throw std::string("String exception");
    } catch (const std::string &s) {
        std::cout << "Caught: " << s << std::endl;
    }
    return 0;
}
