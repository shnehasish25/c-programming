#include <iostream>

class Person {
public:
    std::string name;
    Person(std::string n) : name(n) {}
};

class Employee : public Person {
public:
    int emp_id;
    Employee(std::string n, int id) : Person(n), emp_id(id) {}
};

int main() {
    Employee e("Sarah", 501);
    std::cout << e.name << " ID: " << e.emp_id << std::endl;
    return 0;
}
