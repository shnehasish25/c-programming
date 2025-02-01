#include <iostream>
#include <string>

int main() {
    std::string s = "Content";
    s.clear();
    std::cout << "Size after clear: " << s.size() << std::endl;
    return 0;
}
