#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, std::string> m = {{1, "one"}, {2, "two"}};
    auto it = m.find(2);
    if (it != m.end()) std::cout << "Found: " << it->second << "\n";
    return 0;
}
