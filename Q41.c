//W.a.p to enter two matrices of size 3x3 and sum them.

#include <stdio.h>

int main() {
    int matrix1[3][3], matrix2[3][3], sum[3][3];
    printf("Enter elements of first matrix (3x3):\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &matrix1[i][j]);

    printf("Enter elements of second matrix (3x3):\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &matrix2[i][j]);

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            sum[i][j] = matrix1[i][j] + matrix2[i][j];

    printf("Sum of matrices:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
    return 0;
}
