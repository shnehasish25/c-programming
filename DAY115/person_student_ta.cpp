#include <iostream>

class Person {
public:
    void id() { std::cout << "Person\n"; }
};
class Student : public Person {};
class TA : public Student {};

int main() {
    TA ta;
    ta.id();
    return 0;
}
