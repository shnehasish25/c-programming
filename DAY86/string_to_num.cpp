#include <iostream>
#include <string>

int main() {
    std::string num_str = "1234";
    int val = std::stoi(num_str);
    std::cout << "Converted int + 10: " << val + 10 << std::endl;
    return 0;
}
