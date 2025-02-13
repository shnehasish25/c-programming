#include <iostream>

class Dim {
public:
    int l, w;
    Dim() : l(0), w(0) {}
    Dim(int l, int w) : l(l), w(w) {}
};

int main() {
    Dim d(10, 20);
    std::cout << d.l << "x" << d.w << std::endl;
    return 0;
}
