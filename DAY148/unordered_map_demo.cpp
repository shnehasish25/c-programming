#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    std::unordered_map<std::string, int> scores;
    scores["Physics"] = 92;
    scores["Math"] = 98;
    std::cout << "Math: " << scores["Math"] << std::endl;
    return 0;
}
