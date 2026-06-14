#include <stdio.h>

void matrixAddition(int a[10][10], int b[10][10], int r, int c) {
    int i, j;
    printf("\nResult of Matrix Addition:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}

void matrixMultiplication(int a[10][10], int b[10][10], int r1, int c1, int c2) {
    int i, j, k, result[10][10] = {0};

    printf("\nResult of Matrix Multiplication:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            for(k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

void transpose(int a[10][10], int r, int c) {
    int i, j;
    printf("\nTranspose of Matrix:\n");
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}

int main() {
    int a[10][10], b[10][10];
    int r1, c1, r2, c2;
    int i, j;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    if(r1 == r2 && c1 == c2)
        matrixAddition(a, b, r1, c1);
    else
        printf("\nMatrix addition not possible.\n");

    if(c1 == r2)
        matrixMultiplication(a, b, r1, c1, c2);
    else
        printf("\nMatrix multiplication not possible.\n");

    transpose(a, r1, c1);

    return 0;
}
