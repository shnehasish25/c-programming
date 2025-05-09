#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, double> price = {{"laptop", 899.99}};
    std::cout << "Contains phone: " << price.count("phone") << std::endl;
    return 0;
}
