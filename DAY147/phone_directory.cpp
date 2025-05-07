#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, std::string> phonebook;
    phonebook["Alex"] = "555-0199";
    phonebook["Dave"] = "555-0144";
    std::cout << "Dave: " << phonebook["Dave"] << std::endl;
    return 0;
}
