#include <iostream>

enum class Light { Red, Yellow, Green };

void check_light(Light l) {
    if (l == Light::Red) std::cout << "Stop!\n";
    else if (l == Light::Green) std::cout << "Go!\n";
    else std::cout << "Caution!\n";
}

int main() {
    check_light(Light::Red);
    check_light(Light::Green);
    return 0;
}
