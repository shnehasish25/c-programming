#include <iostream>
#include <set>
#include <vector>

int main() {
    std::vector<int> v = {9, 1, 4, 1, 9, 3};
    std::set<int> unique_vals(v.begin(), v.end());
    std::cout << "Unique count: " << unique_vals.size() << std::endl;
    return 0;
}
