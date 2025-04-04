#include <iostream>

template <typename T>
void my_swap(T &a, T &b) {
    T t = a;
    a = b;
    b = t;
}

int main() {
    int x = 1, y = 2;
    my_swap(x, y);
    std::cout << "x=" << x << ", y=" << y << std::endl;

    std::string s1 = "hello", s2 = "world";
    my_swap(s1, s2);
    std::cout << s1 << " " << s2 << std::endl;
    return 0;
}
