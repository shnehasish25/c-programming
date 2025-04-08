#include <iostream>

template <typename T>
class Pair {
    T first, second;
public:
    Pair(T a, T b) : first(a), second(b) {}
    T get_max() { return first > second ? first : second; }
};

int main() {
    Pair<int> p(15, 42);
    std::cout << "Max: " << p.get_max() << std::endl;
    return 0;
}
