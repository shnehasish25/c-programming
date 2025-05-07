#include <iostream>
#include <map>

int main() {
    std::map<int, int> sq;
    for (int i = 1; i <= 4; i++) sq[i] = i * i;
    for (auto [k, v] : sq) std::cout << k << "^2 = " << v << "\n";
    return 0;
}
