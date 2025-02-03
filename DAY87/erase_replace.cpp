#include <iostream>
#include <string>

int main() {
    std::string s = "This is bad code";
    s.replace(8, 3, "good");
    std::cout << s << std::endl;
    return 0;
}
