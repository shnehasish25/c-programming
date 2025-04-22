#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {10, 30};
    v.insert(v.begin() + 1, 20);
    for (int x : v) std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}
