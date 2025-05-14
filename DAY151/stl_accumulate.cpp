#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> nums = {10, 20, 30, 40};
    int total = std::accumulate(nums.begin(), nums.end(), 0);
    std::cout << "Total: " << total << std::endl;
    return 0;
}
