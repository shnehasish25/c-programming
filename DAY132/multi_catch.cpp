#include <iostream>

void test(int choice) {
    if (choice == 1) throw 10;
    if (choice == 2) throw 'E';
    if (choice == 3) throw 3.14;
}

int main() {
    for (int i = 1; i <= 3; i++) {
        try {
            test(i);
        } catch (int e) { std::cout << "Caught int: " << e << "\n"; }
        catch (char e) { std::cout << "Caught char: " << e << "\n"; }
        catch (...) { std::cout << "Caught unknown exception\n"; }
    }
    return 0;
}
