#include <stdio.h>

struct Item {
    char name[20];
    int qty;
};

int main() {
    struct Item cart[2] = {{"Notebook", 3}, {"Pen", 5}};
    for (int i = 0; i < 2; i++) {
        printf("%s: %d pcs\n", cart[i].name, cart[i].qty);
    }
    return 0;
}
