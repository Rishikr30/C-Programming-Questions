// W.a.p to enter two matrices of size 3x3 and perform multiplication.

#include <stdio.h>

int main() {
    int matrix1[3][3], matrix2[3][3], result[3][3] = {0};
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
            for (int k = 0; k < 3; k++)
                result[i][j] += matrix1[i][k] * matrix2[k][j];

    printf("Product of matrices:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }
    return 0;
}
