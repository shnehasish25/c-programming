#include <iostream>
#include <deque>

int main() {
    std::deque<char> dq;
    dq.push_front('B');
    dq.push_front('A');
    dq.push_back('C');
    std::cout << dq.front() << " to " << dq.back() << std::endl;
    return 0;
}
