#include <iostream>

int main() {
    int a = 100;
    int *ptr = &a;
    int &ref = a;
    std::cout << "*ptr=" << *ptr << ", ref=" << ref << std::endl;
    return 0;
}
