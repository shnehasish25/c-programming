#include <iostream>
#include <map>

int main() {
    // map with descending keys
    std::map<int, std::string, std::greater<int>> desc;
    desc[1] = "First";
    desc[2] = "Second";
    for (const auto &p : desc) std::cout << p.first << ":" << p.second << " ";
    std::cout << std::endl;
    return 0;
}
