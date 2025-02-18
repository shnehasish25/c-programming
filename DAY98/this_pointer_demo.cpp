#include <iostream>

class Counter {
    int count;
public:
    Counter(int count) {
        this->count = count; // disambiguate
    }
    void show() { std::cout << "Count: " << count << std::endl; }
};

int main() {
    Counter c(10);
    c.show();
    return 0;
}
