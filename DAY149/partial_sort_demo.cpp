#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {9, 1, 8, 2, 7, 3};
    std::partial_sort(v.begin(), v.begin() + 3, v.end());
    std::cout << "Smallest 3: " << v[0] << " " << v[1] << " " << v[2] << std::endl;
    return 0;
}
