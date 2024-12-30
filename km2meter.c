#include<stdio.h>
int main()
{
    float km,meter;
    printf("\nEnter the distance in kilometer = ");
    scanf("%f",&km);
    meter=km*1000;
    printf("\nDistance in meter = %2f",meter);
    return 0;
}