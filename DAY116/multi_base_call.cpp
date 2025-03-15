#include <iostream>

class A { public: void show() { std::cout << "From A\n"; } };
class B { public: void show() { std::cout << "From B\n"; } };

class C : public A, public B {
public:
    void call_both() {
        A::show();
        B::show();
    }
};

int main() {
    C obj;
    obj.call_both();
    return 0;
}
