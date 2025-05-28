#include <iostream>
#include <vector>
#include "student_record.h"

int main() {
    StudentRecord s1{"Alice", {90, 85, 95}};
    StudentRecord s2{"Bob", {70, 75, 80}};
    std::cout << s1.name << " avg: " << s1.average() << "\n";
    std::cout << s2.name << " avg: " << s2.average() << "\n";
    return 0;
}
