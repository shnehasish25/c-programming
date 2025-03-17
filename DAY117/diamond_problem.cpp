#include <iostream>

// Virtual base class resolves diamond problem
class PoweredDevice {
public:
    int voltage = 12;
};

class Scanner : virtual public PoweredDevice {};
class Printer : virtual public PoweredDevice {};

class Copier : public Scanner, public Printer {};

int main() {
    Copier c;
    std::cout << "Voltage: " << c.voltage << "V (unambiguous!)\n";
    return 0;
}
