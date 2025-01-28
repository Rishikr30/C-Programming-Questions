// W.a.p to enter three numbers from keyboard and find greatest among them.

#include <stdio.h>

int main() {
    int a, b, c, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    max = (a > b && a > c) ? a : (b > c) ? b : c;
    printf("Greatest number: %d\n", max);
    return 0;
}
