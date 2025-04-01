#include <iostream>

class Card {
public:
    bool validate(std::string num) { return num.length() == 16; }
};

int main() {
    Card c;
    std::cout << "Card valid: " << c.validate("1234567812345678") << std::endl;
    return 0;
}
