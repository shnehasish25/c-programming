#include <iostream>
#include <string>

int main() {
    std::string s = "hello world";
    size_t idx = s.find('w');
    std::cout << "Index of 'w': " << idx << std::endl;
    return 0;
}
