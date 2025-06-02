#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

int main() {
    auto nums = std::make_unique<std::vector<int>>(std::initializer_list<int>{1, 2, 3, 4, 5});
    std::for_each(nums->begin(), nums->end(), [](int x) {
        std::cout << x * x << " ";
    });
    std::cout << std::endl;
    return 0;
}
