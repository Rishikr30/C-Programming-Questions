//W.a.p. to create a Structure for Date and Time


#include <stdio.h>

struct DateTime {
    int day, month, year, hour, minute, second;
};

int main() {
    struct DateTime dt;
    
    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &dt.day, &dt.month, &dt.year);
    
    printf("Enter time (hh mm ss): ");
    scanf("%d %d %d", &dt.hour, &dt.minute, &dt.second);
    
    printf("\nDate and Time: %02d/%02d/%04d %02d:%02d:%02d\n",
           dt.day, dt.month, dt.year, dt.hour, dt.minute, dt.second);

    return 0;
}
