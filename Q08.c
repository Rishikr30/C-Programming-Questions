// Write a programme to enter inches from keyboard and convert it into feet.


#include <stdio.h>

int main() {
    float inches, feet;
    printf("Enter inches: ");
    scanf("%f", &inches);
    feet = inches / 12;
    printf("Feet: %.2f\n", feet);
    return 0;
}
