#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<char, int> letters;
    std::string s = "antigravity";
    for (char c : s) letters[c]++;
    for (auto [ch, n] : letters) std::cout << ch << ":" << n << " ";
    std::cout << std::endl;
    return 0;
}
