#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> fl = {100, 200, 300};
    fl.push_front(50);
    for (int x : fl) std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}
