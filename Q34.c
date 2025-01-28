//W.a.p to Enter 10 different numbers and print them.

#include <stdio.h>

int main() {
    int arr[10];
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("You entered: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
