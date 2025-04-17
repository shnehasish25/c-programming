#include <iostream>
#include <exception>

class MyException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Custom application error occurred";
    }
};

int main() {
    try {
        throw MyException();
    } catch (const std::exception &e) {
        std::cout << "Handled: " << e.what() << std::endl;
    }
    return 0;
}
