#include <iostream>
#include <vector>

int main() {
    std::vector<int> v(100);
    v.resize(5);
    v.shrink_to_fit();
    std::cout << "Shrunk capacity: " << v.capacity() << std::endl;
    return 0;
}
