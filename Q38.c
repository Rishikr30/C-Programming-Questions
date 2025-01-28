//W.a.p to enter 10 different numbers from keyboard and print all prime numbers.



#include <stdio.h>

int isPrime(int num) {
    if(num < 2) return 0;
    for(int i = 2; i <= num/2; i++) {
        if(num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int arr[10], i;

    // Taking input
    printf("Enter 10 different numbers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Display prime numbers
    printf("Prime numbers are:\n");
    for(i = 0; i < 10; i++) {
        if(isPrime(arr[i])) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
