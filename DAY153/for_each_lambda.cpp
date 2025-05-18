#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 3};
    std::for_each(v.begin(), v.end(), [](int &x) { x *= 3; });
    for (int x : v) std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}
