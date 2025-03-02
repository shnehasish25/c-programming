#include <iostream>

class Sample {
    int x;
public:
    Sample(int x) : x(x) {}
    Sample& operator=(const Sample &o) {
        if (this == &o) std::cout << "Self assignment detected!\n";
        x = o.x;
        return *this;
    }
};

int main() {
    Sample s(5);
    s = s;
    return 0;
}
