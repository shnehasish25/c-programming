#include <iostream>

class Sample {
    int val = 42;
public:
    int get_val() const {
        return val;
    }
};

int main() {
    Sample s;
    std::cout << s.get_val() << std::endl;
    return 0;
}
