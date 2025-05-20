#include <iostream>
#include <memory>

int main() {
    auto p1 = std::make_unique<std::string>("Ownership transfer");
    std::unique_ptr<std::string> p2 = std::move(p1); // transfer
    if (!p1) std::cout << "p1 is now null\n";
    std::cout << "p2 holds: " << *p2 << std::endl;
    return 0;
}
