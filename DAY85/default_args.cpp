#include <iostream>

void greet(std::string name = "Guest", std::string title = "Friend") {
    std::cout << "Hello, " << title << " " << name << "!" << std::endl;
}

int main() {
    greet();
    greet("John");
    greet("Alice", "Dr.");
    return 0;
}
