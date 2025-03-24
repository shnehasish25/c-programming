#include <iostream>

class Animal {
public:
    virtual void speak() {
        std::cout << "Animal sound\n";
    }
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void speak() override {
        std::cout << "Woof! Woof!\n";
    }
};

int main() {
    Animal *a = new Dog();
    a->speak(); // calls Dog::speak dynamically!
    delete a;
    return 0;
}
