//W.a.p. to Find factorial using recursion.


#include <stdio.h>

long factorial(int n) {
    return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d is: %ld\n", num, factorial(num));
    return 0;
}
