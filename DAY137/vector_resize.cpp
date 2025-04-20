#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {1, 2, 3};
    v.resize(6, 0);
    for (int x : v) std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}
