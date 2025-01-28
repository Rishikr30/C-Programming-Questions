//W.a.p to enter 10 different numbers from keyboard and arrange it in ascending order.



#include <stdio.h>

int main() {
    int arr[10], i, j, temp;

    // Taking input
    printf("Enter 10 different numbers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting using Bubble Sort
    for(i = 0; i < 10-1; i++) {
        for(j = 0; j < 10-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Display sorted array
    printf("Numbers in ascending order are:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
