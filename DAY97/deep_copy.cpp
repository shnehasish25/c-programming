#include <iostream>

class Deep {
public:
    int *data;
    Deep(int val) {
        data = new int(val);
    }
    Deep(const Deep &other) {
        data = new int(*other.data);
        std::cout << "Deep copy constructor created new memory\n";
    }
    ~Deep() {
        delete data;
    }
};

int main() {
    Deep d1(100);
    Deep d2 = d1;
    *d2.data = 200;
    std::cout << "d1=" << *d1.data << ", d2=" << *d2.data << std::endl;
    return 0;
}
