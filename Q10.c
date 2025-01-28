//Write a programme to calculate Compound Interest after taking data from keyboard.



#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, ci;
    printf("Enter principal, rate, and time: ");
    scanf("%f %f %f", &principal, &rate, &time);
    ci = principal * pow((1 + rate / 100), time);
    printf("Compound Interest: %.2f\n", ci);
    return 0;
}
