#include <iostream>

class Common {
public:
    int id = 1;
};

class Left : virtual public Common {};
class Right : virtual public Common {};
class Bottom : public Left, public Right {};

int main() {
    Bottom b;
    std::cout << "Common id: " << b.id << std::endl;
    return 0;
}
