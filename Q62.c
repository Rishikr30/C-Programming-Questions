//W.a.p. to Create a structure for a student.


#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s1 = {"Rishi Kkumar", 101, 85.5};

    printf("Student Details:\n");
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n", s1.name, s1.roll, s1.marks);
    return 0;
}
