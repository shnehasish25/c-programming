#include <iostream>
#include <map>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> words = {"apple", "banana", "apple", "cherry", "apple"};
    std::map<std::string, int> freq;
    for (const auto &w : words) freq[w]++;
    for (const auto &p : freq) {
        std::cout << p.first << ": " << p.second << "\n";
    }
    return 0;
}
