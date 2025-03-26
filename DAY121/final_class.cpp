#include <iostream>

class FinalClass final {
public:
    void message() { std::cout << "Cannot be inherited\n"; }
};

int main() {
    FinalClass fc;
    fc.message();
    return 0;
}
