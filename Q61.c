//W.a.p. to Print table using recursion.


#include <stdio.h>

void print_table(int num, int i) {
    if (i > 10) return;
    printf("%d x %d = %d\n", num, i, num * i);
    print_table(num, i + 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    print_table(num, 1);
    return 0;
}
