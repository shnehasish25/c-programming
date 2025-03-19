#include <iostream>

class Worker {
public:
    void task() { std::cout << "Standard work\n"; }
};

class Specialist : public Worker {
public:
    void task() {
        Worker::task();
        std::cout << "Specialized research\n";
    }
};

int main() {
    Specialist s;
    s.task();
    return 0;
}
