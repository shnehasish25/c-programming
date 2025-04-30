#include <iostream>
#include <queue>
#include <vector>

int find_kth_largest(const std::vector<int> &nums, int k) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> min_heap;
    for (int x : nums) {
        min_heap.push(x);
        if (min_heap.size() > (size_t)k) min_heap.pop();
    }
    return min_heap.top();
}

int main() {
    std::vector<int> v = {3, 2, 1, 5, 6, 4};
    std::cout << "2nd largest: " << find_kth_largest(v, 2) << std::endl;
    return 0;
}
