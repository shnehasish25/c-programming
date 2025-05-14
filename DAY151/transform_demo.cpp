#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> src = {1, 2, 3};
    std::vector<int> dest(3);
    std::transform(src.begin(), src.end(), dest.begin(), [](int x) { return x * 10; });
    for (int x : dest) std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}
