//W.a.p to enter age from keyboard and check the input age is eligible for voting or not.


#include <stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if (age >= 18)
        printf("Eligible to vote.\n");
    else
        printf("Not eligible to vote.\n");
    return 0;
}
