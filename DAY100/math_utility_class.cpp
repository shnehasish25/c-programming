#include <iostream>

class MathUtil {
public:
    static int cube(int x) { return x * x * x; }
    static int max2(int a, int b) { return a > b ? a : b; }
};

int main() {
    std::cout << "Cube of 4: " << MathUtil::cube(4) << std::endl;
    return 0;
}
