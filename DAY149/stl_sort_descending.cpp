#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {4, 1, 8, 3, 9};
    std::sort(v.begin(), v.end(), std::greater<int>());
    for (int x : v) std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}
