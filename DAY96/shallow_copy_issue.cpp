#include <iostream>

class Shallow {
public:
    int *val;
    Shallow(int v) { val = new int(v); }
    ~Shallow() { delete val; }
};

int main() {
    std::cout << "Shallow copy warning: default copy just copies pointers!\n";
    return 0;
}
