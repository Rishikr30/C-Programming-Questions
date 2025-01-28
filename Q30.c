//W.a.p to print all factorial values between two given range.



#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int start, end;
    printf("Enter range: ");
    scanf("%d %d", &start, &end);
    for (int i = start; i <= end; i++) {
        printf("Factorial of %d = %d\n", i, factorial(i));
    }
    return 0;
}
