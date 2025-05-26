#pragma once
#include <string>

class BankAccount {
    std::string owner;
    double balance;
public:
    BankAccount(std::string name, double initial = 0.0);
    void deposit(double amount);
    bool withdraw(double amount);
    double get_balance() const;
    std::string get_owner() const;
};
