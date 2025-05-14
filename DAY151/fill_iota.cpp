#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> v(5);
    std::iota(v.begin(), v.end(), 1); // 1, 2, 3, 4, 5
    for (int x : v) std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}
