#include <iostream>
#include <memory>

struct CustomDeleter {
    void operator()(int *p) const {
        std::cout << "Custom deleter called!\n";
        delete p;
    }
};

int main() {
    std::unique_ptr<int, CustomDeleter> p(new int(88), CustomDeleter());
    return 0;
}
