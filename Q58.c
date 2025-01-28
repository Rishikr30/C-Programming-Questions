// W.a.p. to show Call by value & call by reference (Swap numbers)


#include <stdio.h>

void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside function (by value): x = %d, y = %d\n", a, b);
}

void swap_by_reference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    swap_by_value(x, y);
    printf("After call by value: x = %d, y = %d\n", x, y);

    swap_by_reference(&x, &y);
    printf("After call by reference: x = %d, y = %d\n", x, y);

    return 0;
}
