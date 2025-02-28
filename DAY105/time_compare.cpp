#include <iostream>

class Time {
    int seconds;
public:
    Time(int s) : seconds(s) {}
    bool operator!=(const Time &o) const { return seconds != o.seconds; }
};

int main() {
    Time t1(60), t2(120);
    std::cout << "t1 != t2: " << (t1 != t2) << std::endl;
    return 0;
}
