//W.a.p to print all even and odd numbers from 10 to 100.


#include <stdio.h>

int main() {
    printf("Even numbers:\n");
    for (int i = 10; i <= 100; i += 2) {
        printf("%d ", i);
    }
    printf("\nOdd numbers:\n");
    for (int i = 11; i <= 99; i += 2) {
        printf("%d ", i);
    }
    return 0;
}
