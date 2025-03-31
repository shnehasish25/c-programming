#include <iostream>

class Animal {
public:
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void bark() { std::cout << "Woof!\n"; }
};

int main() {
    Animal *a = new Dog();
    Dog *d = dynamic_cast<Dog*>(a);
    if (d) {
        d->bark();
    }
    delete a;
    return 0;
}
