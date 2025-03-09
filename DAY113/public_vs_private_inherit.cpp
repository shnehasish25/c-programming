#include <iostream>

class Base {
public:
    void pub() { std::cout << "Base public\n"; }
};

class PubDerived : public Base {};
class PrivDerived : private Base {
public:
    void access() { pub(); } // accessible internally
};

int main() {
    PubDerived p; p.pub();
    PrivDerived pr; pr.access();
    return 0;
}
