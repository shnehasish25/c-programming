#include <iostream>

class Animal {
public:
    void sound() { std::cout << "Generic sound\n"; }
};

class Cat : public Animal {
public:
    void sound() { std::cout << "Meow\n"; }
};

int main() {
    Cat c;
    Animal *ptr = &c;
    ptr->sound(); // calls Animal::sound because not virtual yet!
    return 0;
}
