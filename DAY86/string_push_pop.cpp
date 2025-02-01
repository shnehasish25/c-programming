#include <iostream>
#include <string>

int main() {
    std::string s = "Cart";
    s.push_back('s');
    std::cout << s << std::endl;
    s.pop_back();
    std::cout << s << std::endl;
    return 0;
}
