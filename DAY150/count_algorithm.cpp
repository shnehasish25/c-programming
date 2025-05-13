#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {1, 3, 3, 2, 3, 4};
    int c = std::count(nums.begin(), nums.end(), 3);
    std::cout << "Count of 3: " << c << std::endl;
    return 0;
}
