#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {5, 2, 9, 1, 7};
    std::sort(nums.begin(), nums.end(), [](int a, int b) { return a > b; });
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}
