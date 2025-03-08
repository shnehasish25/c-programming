#include <iostream>

class Employee {
protected:
    double salary = 60000;
};

class Manager : public Employee {
public:
    void print_comp() {
        std::cout << "Total: $" << salary + 15000 << std::endl;
    }
};

int main() {
    Manager m;
    m.print_comp();
    return 0;
}
