#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    std::cout << "Front: " << q.front() << ", Back: " << q.back() << std::endl;
    q.pop();
    std::cout << "After pop, front: " << q.front() << std::endl;
    return 0;
}
