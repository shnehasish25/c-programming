#include <iostream>
#include <stack>

class MinStack {
    std::stack<int> s;
    std::stack<int> min_s;
public:
    void push(int x) {
        s.push(x);
        if (min_s.empty() || x <= min_s.top()) min_s.push(x);
    }
    void pop() {
        if (s.top() == min_s.top()) min_s.pop();
        s.pop();
    }
    int get_min() { return min_s.top(); }
};

int main() {
    MinStack ms;
    ms.push(10); ms.push(5); ms.push(20);
    std::cout << "Min: " << ms.get_min() << std::endl;
    return 0;
}
