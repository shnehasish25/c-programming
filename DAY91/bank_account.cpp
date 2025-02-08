#include <iostream>

class BankAccount {
private:
    double balance;

public:
    void init(double initial) { balance = initial; }
    void deposit(double amt) { balance += amt; }
    double get_balance() { return balance; }
};

int main() {
    BankAccount acc;
    acc.init(100.0);
    acc.deposit(50.0);
    std::cout << "Balance: $" << acc.get_balance() << std::endl;
    return 0;
}
