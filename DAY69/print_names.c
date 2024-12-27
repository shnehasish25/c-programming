#include <stdio.h>

int main() {
    const char *items[] = {"Desk", "Chair", "Lamp"};
    for (int i = 0; i < 3; i++) printf("- %s\n", items[i]);
    return 0;
}
