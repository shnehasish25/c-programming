#include <iostream>
#include <string>

void print(int x) { std::cout << "Integer: " << x << "\n"; }
void print(const std::string &s) { std::cout << "String: " << s << "\n"; }

int main() {
    print(10);
    print(std::string("Hello Overload"));
    return 0;
}
