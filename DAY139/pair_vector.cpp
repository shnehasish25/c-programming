#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::pair<int, std::string>> list = {{2, "B"}, {1, "A"}, {3, "C"}};
    std::sort(list.begin(), list.end());
    for (const auto &p : list) std::cout << p.first << ":" << p.second << " ";
    std::cout << std::endl;
    return 0;
}
