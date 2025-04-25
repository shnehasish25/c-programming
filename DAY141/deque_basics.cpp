#include <iostream>
#include <deque>

int main() {
    std::deque<int> d = {20, 30};
    d.push_front(10);
    d.push_back(40);
    for (int x : d) std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}
