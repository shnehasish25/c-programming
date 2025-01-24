#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

void move(Point *p, int dx, int dy) {
    p->x += dx;
    p->y += dy;
}

int main() {
    Point p = {5, 5};
    move(&p, 10, -2);
    printf("Moved to: (%d, %d)\n", p.x, p.y);
    return 0;
}
