#include <iostream>

class Logger {
public:
    Logger() { std::cout << "[Init Logger]\n"; }
};

int main() {
    Logger log;
    return 0;
}
