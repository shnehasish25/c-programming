#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    std::string s = "antigravity";
    std::unordered_map<char, int> freq;
    for (char c : s) freq[c]++;
    for (auto [ch, count] : freq) {
        std::cout << ch << " -> " << count << "\n";
    }
    return 0;
}
