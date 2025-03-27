#include <iostream>

class Greeter {
public:
    virtual void greet() = 0;
    virtual ~Greeter() {}
};

class Friendly : public Greeter {
public:
    void greet() override { std::cout << "Hello my friend!\n"; }
};

int main() {
    Friendly f;
    f.greet();
    return 0;
}
