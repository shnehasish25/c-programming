#include <iostream>
#include <stack>
#include <string>

int main() {
    std::string str = "Antigravity";
    std::stack<char> s;
    for (char c : str) s.push(c);
    std::string rev;
    while (!s.empty()) { rev += s.top(); s.pop(); }
    std::cout << "Reversed: " << rev << std::endl;
    return 0;
}
