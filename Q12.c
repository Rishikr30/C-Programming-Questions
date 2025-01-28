//W.a.p to enter two numbers from keyboard & find bigger between them using ternary operator.


#include <stdio.h>

int main() {
    int a, b, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b;
    printf("Larger number: %d\n", max);
    return 0;
}
