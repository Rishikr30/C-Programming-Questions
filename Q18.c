//W.a.p to enter a number from 1 to 7 and print the week day (Assume 1 as Sunday).


#include <stdio.h>

int main() {
    int day;
    printf("Enter a number (1-7): ");
    scanf("%d", &day);
    char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    if (day >= 1 && day <= 7)
        printf("%s\n", days[day - 1]);
    else
        printf("Invalid input\n");
    return 0;
}
