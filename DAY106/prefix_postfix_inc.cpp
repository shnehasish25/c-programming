#include <iostream>

class Counter {
    int val = 0;
public:
    Counter(int v = 0) : val(v) {}

    // prefix ++c
    Counter& operator++() {
        val++;
        return *this;
    }

    // postfix c++
    Counter operator++(int) {
        Counter temp = *this;
        val++;
        return temp;
    }

    int get() const { return val; }
};

int main() {
    Counter c(5);
    ++c;
    std::cout << "Prefix: " << c.get() << std::endl;
    c++;
    std::cout << "Postfix: " << c.get() << std::endl;
    return 0;
}
