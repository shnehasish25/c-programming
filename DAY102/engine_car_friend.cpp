#include <iostream>

class Engine {
    int hp = 300;
    friend class Car;
};

class Car {
public:
    void show_hp(Engine e) {
        std::cout << "Horsepower: " << e.hp << " HP\n";
    }
};

int main() {
    Engine e; Car c;
    c.show_hp(e);
    return 0;
}
