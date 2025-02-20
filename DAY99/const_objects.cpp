#include <iostream>

class Data {
    int x;
public:
    Data(int v) : x(v) {}
    int read() const { return x; }
};

int main() {
    const Data d(999);
    std::cout << "Const object read: " << d.read() << std::endl;
    return 0;
}
