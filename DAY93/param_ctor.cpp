#include <iostream>

class Student {
public:
    std::string name;
    int roll;

    Student(std::string n, int r) {
        name = n;
        roll = r;
    }
};

int main() {
    Student s("Alice", 101);
    std::cout << "Student: " << s.name << " (" << s.roll << ")\n";
    return 0;
}
