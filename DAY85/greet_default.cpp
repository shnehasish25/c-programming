#include <iostream>

int calc_price(int qty, int price = 20) {
    return qty * price;
}

int main() {
    std::cout << "5 items default price: " << calc_price(5) << "\n";
    std::cout << "5 items custom price: " << calc_price(5, 35) << "\n";
    return 0;
}
