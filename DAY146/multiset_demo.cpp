#include <iostream>
#include <set>

int main() {
    std::multiset<int> ms = {5, 1, 5, 3, 5};
    std::cout << "5 appears " << ms.count(5) << " times\n";
    return 0;
}
