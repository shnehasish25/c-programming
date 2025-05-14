#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 2, 3};
    auto it = std::adjacent_find(v.begin(), v.end());
    if (it != v.end()) std::cout << "Duplicate pair: " << *it << std::endl;
    return 0;
}
