#include <stdio.h>

int main() {
    int *pi;
    char *pc;
    double *pd;
    printf("sizeof int*: %lu, char*: %lu, double*: %lu\n",
           sizeof(pi), sizeof(pc), sizeof(pd));
    return 0;
}
