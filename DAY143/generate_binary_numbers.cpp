#include <iostream>
#include <queue>
#include <string>

void print_binary(int n) {
    std::queue<std::string> q;
    q.push("1");
    for (int i = 1; i <= n; i++) {
        std::string cur = q.front();
        q.pop();
        std::cout << cur << " ";
        q.push(cur + "0");
        q.push(cur + "1");
    }
    std::cout << std::endl;
}

int main() {
    print_binary(7);
    return 0;
}
