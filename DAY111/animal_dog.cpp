#include <iostream>

class Pet {
public:
    std::string name = "Buddy";
};

class Puppy : public Pet {
public:
    void play() { std::cout << name << " is playing!\n"; }
};

int main() {
    Puppy p;
    p.play();
    return 0;
}
