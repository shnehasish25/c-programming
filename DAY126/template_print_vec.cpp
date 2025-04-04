#include <iostream>
#include <vector>

template <typename T>
void print_vector(const std::vector<T> &v) {
    for (const auto &elem : v) std::cout << elem << " ";
    std::cout << std::endl;
}

int main() {
    std::vector<int> nums = {10, 20, 30};
    print_vector(nums);
    return 0;
}
