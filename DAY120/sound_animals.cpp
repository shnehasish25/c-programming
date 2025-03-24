#include <iostream>

class Speaker {
public:
    virtual void say() { std::cout << "Hello\n"; }
    virtual ~Speaker() {}
};

class Spanish : public Speaker {
public:
    void say() override { std::cout << "Hola\n"; }
};

int main() {
    Speaker *sp = new Spanish();
    sp->say();
    delete sp;
    return 0;
}
