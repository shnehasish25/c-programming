#include <iostream>
#include <unordered_set>
#include <string>

int main() {
    std::unordered_set<std::string> banned = {"spam", "ad", "bot"};
    std::string word = "spam";
    std::cout << "Is banned: " << (banned.find(word) != banned.end()) << std::endl;
    return 0;
}
