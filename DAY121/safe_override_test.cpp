#include <iostream>

class Worker {
public:
    virtual void do_work() { std::cout << "General work\n"; }
    virtual ~Worker() {}
};

class Engineer : public Worker {
public:
    void do_work() override { std::cout << "Building software\n"; }
};

int main() {
    Worker *w = new Engineer();
    w->do_work();
    delete w;
    return 0;
}
