#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    struct Student s1;
    s1.roll = 101;
    strcpy(s1.name, "Alex");
    s1.marks = 92.5;
    printf("Student: %s, Roll: %d, Marks: %.1f\n", s1.name, s1.roll, s1.marks);
    return 0;
}
