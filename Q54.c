//W.a.p to create a function to find factorial value of a number.


#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial is: %d\n", factorial(num));
    return 0;
}
