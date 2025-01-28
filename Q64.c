//W.a.p. to create a structure to store & print details of 10 students.


#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[10];
    
    for (int i = 0; i < 10; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < 10; i++) {
        printf("%s | Roll No: %d | Marks: %.2f\n", students[i].name, students[i].roll, students[i].marks);
    }
    return 0;
}
