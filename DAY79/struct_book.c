#include <stdio.h>

typedef struct {
    char title[30];
    int pages;
} Book;

int main() {
    Book b = {"The C Programming Language", 272};
    printf("Book: '%s' (%d pages)\n", b.title, b.pages);
    return 0;
}
