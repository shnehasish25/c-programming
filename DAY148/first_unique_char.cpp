#include <iostream>
#include <unordered_map>
#include <string>

int first_unique(const std::string &s) {
    std::unordered_map<char, int> count;
    for (char c : s) count[c]++;
    for (int i = 0; i < (int)s.size(); i++) {
        if (count[s[i]] == 1) return i;
    }
    return -1;
}

int main() {
    std::cout << "First unique in 'swiss': " << first_unique("swiss") << std::endl;
    return 0;
}
