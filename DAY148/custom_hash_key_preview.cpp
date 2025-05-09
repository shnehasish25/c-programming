#include <iostream>
#include <unordered_map>

struct Point { int x, y; };

int main() {
    std::cout << "Custom struct hashing requires std::hash specialization\n";
    return 0;
}
