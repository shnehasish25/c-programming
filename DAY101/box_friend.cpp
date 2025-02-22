#include <iostream>

class Secret {
    int key = 777;
    friend int reveal(const Secret &s);
};

int reveal(const Secret &s) { return s.key; }

int main() {
    Secret s;
    std::cout << "Secret is: " << reveal(s) << std::endl;
    return 0;
}
