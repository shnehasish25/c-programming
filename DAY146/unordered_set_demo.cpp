#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> us = {10, 4, 99, 23};
    if (us.count(99)) std::cout << "99 exists in O(1) avg time!\n";
    return 0;
}
