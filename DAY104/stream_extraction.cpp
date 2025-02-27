#include <iostream>
#include <sstream>

class Point {
public:
    int x, y;
    friend std::istream& operator>>(std::istream &is, Point &p) {
        is >> p.x >> p.y;
        return is;
    }
};

int main() {
    std::istringstream iss("15 35");
    Point p;
    iss >> p;
    std::cout << "Read point: " << p.x << ", " << p.y << std::endl;
    return 0;
}
