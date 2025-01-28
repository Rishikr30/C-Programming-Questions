//Write a programme to calculate b2-4ac and print the result.


#include <stdio.h>

int main() {
    int b, a, c, result;
    printf("Enter values for a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    result = (b * b) - (4 * a * c);
    printf("Result: %d\n", result);
    return 0;
}
