#include <iostream>

class Person {
    std::string name;
    int age;
public:
    Person(std::string n, int a) : name(n), age(a) {}
    friend std::ostream& operator<<(std::ostream &os, const Person &p) {
        os << p.name << " (" << p.age << " yrs)";
        return os;
    }
};

int main() {
    Person p("Bob", 30);
    std::cout << p << std::endl;
    return 0;
}
