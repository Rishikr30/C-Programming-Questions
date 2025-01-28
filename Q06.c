//Write a programme to enter degree centigrade from keyboard & convert it into degree Fahrenheit.


#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}
