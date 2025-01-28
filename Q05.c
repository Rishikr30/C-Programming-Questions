//Write a programme to enter Kilometre from keyboard and convert it into meter.


#include <stdio.h>

int main() {
    float km, meters;
    printf("Enter kilometers: ");
    scanf("%f", &km);
    meters = km * 1000;
    printf("Meters: %.2f\n", meters);
    return 0;
}
