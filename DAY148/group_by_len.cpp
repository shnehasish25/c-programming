#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> words = {"to", "in", "cat", "dog", "antigravity"};
    std::unordered_map<int, std::vector<std::string>> by_len;
    for (const auto &w : words) by_len[w.length()].push_back(w);
    for (const auto &[len, list] : by_len) {
        std::cout << "Len " << len << ": " << list.size() << " words\n";
    }
    return 0;
}
