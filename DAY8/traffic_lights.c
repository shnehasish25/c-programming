#include <stdio.h>

int main() {
    char light = 'R';
    switch (light) {
        case 'R': case 'r': printf("Stop!\n"); break;
        case 'Y': case 'y': printf("Wait!\n"); break;
        case 'G': case 'g': printf("Go!\n"); break;
        default: printf("Invalid light color\n");
    }
    return 0;
}
