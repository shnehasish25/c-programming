#include <iostream>

class Person {
public:
    std::string name;
    int age;

    void introduce() {
        std::cout << "Hi, I am " << name << ", age " << age << std::endl;
    }
};

int main() {
    Person p;
    p.name = "John";
    p.age = 22;
    p.introduce();
    return 0;
}
