#include <iostream>

class Mat {
public:
    int data[2][2] = {{1, 0}, {0, 1}};
    void show() {
        std::cout << data[0][0] << " " << data[0][1] << "\n"
                  << data[1][0] << " " << data[1][1] << "\n";
    }
};

int main() {
    Mat m;
    m.show();
    return 0;
}
