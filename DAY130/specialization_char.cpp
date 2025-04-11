#include <iostream>

template <typename T>
class Formatter {
public:
    void print(T val) { std::cout << "Generic: " << val << "\n"; }
};

// Full specialization for char
template <>
class Formatter<char> {
public:
    void print(char c) { std::cout << "Char literal: '" << c << "'\n"; }
};

int main() {
    Formatter<int> fi; fi.print(123);
    Formatter<char> fc; fc.print('Z');
    return 0;
}
