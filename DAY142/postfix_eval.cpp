#include <iostream>
#include <stack>
#include <string>

int eval_postfix(const std::string &expr) {
    std::stack<int> s;
    for (char c : expr) {
        if (c >= '0' && c <= '9') s.push(c - '0');
        else if (c == '+') {
            int b = s.top(); s.pop();
            int a = s.top(); s.pop();
            s.push(a + b);
        }
    }
    return s.top();
}

int main() {
    std::cout << "2 3 + = " << eval_postfix("23+") << std::endl;
    return 0;
}
