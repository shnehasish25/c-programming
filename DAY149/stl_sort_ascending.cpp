#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {40, 10, 50, 20, 30};
    std::sort(v.begin(), v.end());
    for (int x : v) std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}
