#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {10, 20, 20, 20, 30, 40};
    auto low = std::lower_bound(v.begin(), v.end(), 20);
    auto up = std::upper_bound(v.begin(), v.end(), 20);
    std::cout << "20 spans from idx " << (low - v.begin()) << " to " << (up - v.begin()) << std::endl;
    return 0;
}
