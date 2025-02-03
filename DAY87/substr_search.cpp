#include <iostream>
#include <string>

int main() {
    std::string s = "learning modern cpp";
    size_t pos = s.find("modern");
    if (pos != std::string::npos) {
        std::cout << "'modern' found at index " << pos << std::endl;
    }
    return 0;
}
