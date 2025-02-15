#include <iostream>

class Tracer {
    std::string name;
public:
    Tracer(std::string n) : name(n) { std::cout << name << " created\n"; }
    ~Tracer() { std::cout << name << " destroyed\n"; }
};

int main() {
    Tracer t1("Global-like");
    {
        Tracer t2("Local");
    }
    return 0;
}
