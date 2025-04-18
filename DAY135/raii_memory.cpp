#include <iostream>

class ScopedInt {
    int *p;
public:
    ScopedInt(int v) : p(new int(v)) {}
    ~ScopedInt() { delete p; std::cout << "Scoped int freed\n"; }
    int get() const { return *p; }
};

int main() {
    ScopedInt si(77);
    std::cout << "Val: " << si.get() << std::endl;
    return 0;
}
