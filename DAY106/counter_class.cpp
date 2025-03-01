#include <iostream>

class StepCounter {
    int step = 0;
public:
    StepCounter& operator--() { step--; return *this; }
    int val() const { return step; }
};

int main() {
    StepCounter s;
    --s;
    std::cout << "Step: " << s.val() << std::endl;
    return 0;
}
