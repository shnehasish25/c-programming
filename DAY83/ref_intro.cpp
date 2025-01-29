#include <iostream>

int main() {
    int x = 10;
    int &ref = x;
    ref = 25;
    std::cout << "x is now: " << x << std::endl;
    return 0;
}
