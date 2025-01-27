#include <iostream>

using namespace std;

namespace first {
    int val = 50;
}

namespace second {
    int val = 100;
}

int main() {
    cout << "first: " << first::val << ", second: " << second::val << endl;
    return 0;
}
