#include <iostream>

int check_age(int age) {
    if (age < 0) throw -1;
    return age;
}

int main() {
    try {
        check_age(-5);
    } catch (int code) {
        std::cout << "Invalid age code: " << code << std::endl;
    }
    return 0;
}
