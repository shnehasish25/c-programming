#include <iostream>
#include "bank_account.h"

int main() {
    BankAccount acc("Alex", 500.0);
    acc.deposit(250.0);
    acc.withdraw(100.0);
    std::cout << acc.get_owner() << "'s balance: $" << acc.get_balance() << std::endl;
    return 0;
}
