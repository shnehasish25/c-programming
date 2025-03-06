#include <iostream>

class Matrix2x2 {
public:
    int m[2][2];
    Matrix2x2(int a = 0, int b = 0, int c = 0, int d = 0) {
        m[0][0] = a; m[0][1] = b;
        m[1][0] = c; m[1][1] = d;
    }

    Matrix2x2 operator+(const Matrix2x2 &o) const {
        return Matrix2x2(m[0][0]+o.m[0][0], m[0][1]+o.m[0][1],
                         m[1][0]+o.m[1][0], m[1][1]+o.m[1][1]);
    }
};

int main() {
    Matrix2x2 m1(1, 2, 3, 4), m2(5, 6, 7, 8);
    Matrix2x2 m3 = m1 + m2;
    std::cout << m3.m[0][0] << " " << m3.m[0][1] << "\n";
    return 0;
}
