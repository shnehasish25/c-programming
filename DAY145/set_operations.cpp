#include <iostream>
#include <set>

int main() {
    std::set<int> s = {5, 2, 8, 2, 5, 1};
    for (int x : s) std::cout << x << " "; // unique, sorted
    std::cout << std::endl;
    return 0;
}
