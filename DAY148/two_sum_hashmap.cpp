#include <iostream>
#include <vector>
#include <unordered_map>

std::pair<int, int> two_sum(const std::vector<int> &nums, int target) {
    std::unordered_map<int, int> seen;
    for (int i = 0; i < (int)nums.size(); i++) {
        int comp = target - nums[i];
        if (seen.count(comp)) return {seen[comp], i};
        seen[nums[i]] = i;
    }
    return {-1, -1};
}

int main() {
    std::vector<int> v = {2, 7, 11, 15};
    auto [i, j] = two_sum(v, 9);
    std::cout << "Indices: " << i << ", " << j << std::endl;
    return 0;
}
