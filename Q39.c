//W.a.p to enter 10 different numbers from keyboard and print all Armstrong number.



#include <stdio.h>

int isArmstrong(int num) {
    int original, remainder, result = 0;
    original = num;
    while (original != 0) {
        remainder = original % 10;
        result += remainder * remainder * remainder;
        original /= 10;
    }
    return result == num;
}

int main() {
    int arr[10], i;

    // Taking input
    printf("Enter 10 different numbers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Display Armstrong numbers
    printf("Armstrong numbers are:\n");
    for(i = 0; i < 10; i++) {
        if(isArmstrong(arr[i])) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
