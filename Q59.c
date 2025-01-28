//W.a.p. to Pass an array & print sum of elements


#include <stdio.h>

int sum_array(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Sum of array elements: %d\n", sum_array(arr, 5));
    return 0;
}
