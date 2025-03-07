#include <iostream>

class Customer {
public:
    std::string name = "John";
};

class VIPCustomer : public Customer {
public:
    double discount = 0.15;
};

int main() {
    VIPCustomer vip;
    std::cout << vip.name << " gets " << vip.discount * 100 << "% discount\n";
    return 0;
}
