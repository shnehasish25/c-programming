#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    std::cout << "Top: " << s.top() << std::endl;
    s.pop();
    std::cout << "New Top: " << s.top() << std::endl;
    return 0;
}
