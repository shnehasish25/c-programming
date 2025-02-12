#include <iostream>

class Test {
public:
    Test() {
        std::cout << "Default constructor invoked!" << std::endl;
    }
};

int main() {
    Test t;
    return 0;
}
