#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {12, 5, 18, 7, 24, 30};
    int evens = std::count_if(nums.begin(), nums.end(), [](int n) {
        return n % 2 == 0;
    });
    std::cout << "Even count: " << evens << std::endl;
    return 0;
}
