#include <iostream>
#include <set>

int main() {
    std::set<int> s = {10, 20, 30, 40};
    auto it = s.find(20);
    if (it != s.end()) s.erase(it);
    for (int x : s) std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}
