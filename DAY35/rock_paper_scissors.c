#include <stdio.h>

int main() {
    int user = 1; // 1: Rock, 2: Paper, 3: Scissors
    int comp = 2; // Paper
    if (user == comp) printf("Draw!\n");
    else if ((user == 1 && comp == 3) || (user == 2 && comp == 1) || (user == 3 && comp == 2))
        printf("User wins!\n");
    else
        printf("Computer wins!\n");
    return 0;
}
