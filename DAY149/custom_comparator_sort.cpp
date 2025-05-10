#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool compare_length(const std::string &a, const std::string &b) {
    return a.length() < b.length();
}

int main() {
    std::vector<std::string> words = {"elephant", "cat", "hippopotamus", "dog"};
    std::sort(words.begin(), words.end(), compare_length);
    for (const auto &w : words) std::cout << w << " ";
    std::cout << std::endl;
    return 0;
}
