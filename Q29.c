// W.a.p to print range of table between two numbers.



#include <stdio.h>

int main() {
    int start, end;
    printf("Enter range (start and end): ");
    scanf("%d %d", &start, &end);
    for (int i = start; i <= end; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}
