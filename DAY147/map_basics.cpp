#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> ages;
    ages["Alice"] = 24;
    ages["Bob"] = 28;
    for (const auto &pair : ages) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }
    return 0;
}
