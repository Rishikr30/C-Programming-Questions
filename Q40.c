//W.a.p to enter a matrix of size 3x3 and print it in matrix form.


#include <stdio.h>

int main() {
    int matrix[3][3], row, col;

    // Taking input
    printf("Enter elements of 3x3 matrix:\n");
    for(row = 0; row < 3; row++) {
        for(col = 0; col < 3; col++) {
            scanf("%d", &matrix[row][col]);
        }
    }

    // Display matrix
    printf("Matrix is:\n");
    for(row = 0; row < 3; row++) {
        for(col = 0; col < 3; col++) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}
