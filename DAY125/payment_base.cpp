#include <iostream>

class PaymentMethod {
public:
    virtual void process(double amount) = 0;
    virtual ~PaymentMethod() {}
};

class CreditCard : public PaymentMethod {
public:
    void process(double amount) override {
        std::cout << "Charging $" << amount << " to Credit Card\n";
    }
};

class PayPal : public PaymentMethod {
public:
    void process(double amount) override {
        std::cout << "Sending $" << amount << " via PayPal\n";
    }
};

int main() {
    PaymentMethod *p = new CreditCard();
    p->process(49.99);
    delete p;
    p = new PayPal();
    p->process(19.50);
    delete p;
    return 0;
}
