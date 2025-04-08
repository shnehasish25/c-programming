#include <iostream>

template <typename T>
class SimpleStack {
    T data[10];
    int top = -1;
public:
    void push(T val) { data[++top] = val; }
    T pop() { return data[top--]; }
    bool empty() { return top == -1; }
};

int main() {
    SimpleStack<int> s;
    s.push(10); s.push(20);
    std::cout << s.pop() << " " << s.pop() << std::endl;
    return 0;
}
