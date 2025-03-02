#include <iostream>

class Value {
public:
    int v;
    Value(int v) : v(v) {}
};

int main() {
    Value v1(4), v2(8);
    v1 = v2;
    std::cout << v1.v << std::endl;
    return 0;
}
