#include <iostream>

int global_arr[3] = {10, 20, 30};

int& get_elem(int i) {
    return global_arr[i];
}

int main() {
    get_elem(1) = 99; // modify via returned reference
    std::cout << global_arr[1] << std::endl;
    return 0;
}
