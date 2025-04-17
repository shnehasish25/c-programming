#include <iostream>
#include <exception>

class NegativeInputException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Negative input is forbidden!";
    }
};

int main() {
    try {
        throw NegativeInputException();
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
