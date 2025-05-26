#include <iostream>
#include "bank_account.h"

BankAccount::BankAccount(std::string name, double initial)
    : owner(name), balance(initial) {}

void BankAccount::deposit(double amount) {
    if (amount > 0) balance += amount;
}

bool BankAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        return true;
    }
    return false;
}

double BankAccount::get_balance() const { return balance; }
std::string BankAccount::get_owner() const { return owner; }
