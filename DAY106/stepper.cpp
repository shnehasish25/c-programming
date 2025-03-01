#include <iostream>

class Stepper {
    int pos = 0;
public:
    void print() { std::cout << "Pos: " << pos << std::endl; }
};

int main() {
    Stepper st;
    st.print();
    return 0;
}
