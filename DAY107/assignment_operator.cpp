#include <iostream>

class ArrayHolder {
    int *data;
public:
    ArrayHolder(int v) { data = new int(v); }
    ~ArrayHolder() { delete data; }

    // copy assignment
    ArrayHolder& operator=(const ArrayHolder &other) {
        if (this != &other) { // check self assignment
            delete data;
            data = new int(*other.data);
        }
        return *this;
    }

    int get() const { return *data; }
};

int main() {
    ArrayHolder a(10), b(20);
    a = b;
    std::cout << "a now holds: " << a.get() << std::endl;
    return 0;
}
