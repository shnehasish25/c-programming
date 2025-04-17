#include <iostream>
#include <stdexcept>

class OverdraftException : public std::runtime_error {
public:
    OverdraftException() : std::runtime_error("Overdraft limit reached") {}
};

int main() {
    try {
        throw OverdraftException();
    } catch (const OverdraftException &e) {
        std::cout << "Bank error: " << e.what() << std::endl;
    }
    return 0;
}
