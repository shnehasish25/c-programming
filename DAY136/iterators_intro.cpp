#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {5, 10, 15};
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}
