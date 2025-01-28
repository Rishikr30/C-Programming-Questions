//W.a.p to enter a number from keyboard and check the input number is Armstrong number or not.




#include <stdio.h>
#include <math.h>

int main() {
    int num, original, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num != 0) {
        digit = num % 10;
        sum += pow(digit, 3);
        num /= 10;
    }
    if (sum == original)
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");
    return 0;
}
