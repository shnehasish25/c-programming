#include <iostream>
#include <string>

int main() {
    int score = 99;
    std::string s = "Score: " + std::to_string(score);
    std::cout << s << std::endl;
    return 0;
}
