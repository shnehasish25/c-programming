#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {14, 5, 88, 3, 42};
    auto min_it = std::min_element(v.begin(), v.end());
    auto max_it = std::max_element(v.begin(), v.end());
    std::cout << "Min: " << *min_it << ", Max: " << *max_it << std::endl;
    return 0;
}
