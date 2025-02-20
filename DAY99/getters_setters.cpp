#include <iostream>

class Temp {
    double celsius;
public:
    Temp(double c) : celsius(c) {}
    double get_c() const { return celsius; }
    void set_c(double c) { celsius = c; }
};

int main() {
    Temp t(24.5);
    std::cout << t.get_c() << " C" << std::endl;
    return 0;
}
