#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {5, 2, 8, 2, 1};
    std::stable_sort(v.begin(), v.end());
    for (int x : v) std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}
