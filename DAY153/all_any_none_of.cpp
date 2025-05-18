#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {2, 4, 6, 8};
    bool all_even = std::all_of(v.begin(), v.end(), [](int x) { return x % 2 == 0; });
    std::cout << "All even: " << std::boolalpha << all_even << std::endl;
    return 0;
}
