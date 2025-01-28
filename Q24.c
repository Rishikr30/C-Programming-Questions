//W.a.p to enter three digits number and sum each digit.


#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    sum += num % 10;
    num /= 10;
    sum += num % 10;
    num /= 10;
    sum += num;
    printf("Sum of digits: %d\n", sum);
    return 0;
}
