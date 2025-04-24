#include <iostream>
#include <list>

int main() {
    std::list<int> l1 = {1, 2}, l2 = {3, 4};
    l1.splice(l1.end(), l2);
    for (int x : l1) std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}
