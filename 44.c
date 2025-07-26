//CH.SC.U4CSE24039
#include <stdio.h>

void acceptMatrix(int matrix[10][10], int m, int n) {
      int i , j;
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[10][10], int m, int n) {
      int i , j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int A[10][10], int B[10][10], int C[10][10], int m, int n, int p) {
    int i , j , k;
      for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            C[i][j] = 0;
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int m1, n1, m2, n2;
    int A[10][10], B[10][10], C[10][10];
    printf("Enter dimensions of first matrix (m1 n1): ");
    scanf("%d %d", &m1, &n1);
    acceptMatrix(A, m1, n1);
    printf("Enter dimensions of second matrix (m2 n2): ");
    scanf("%d %d", &m2, &n2);
    acceptMatrix(B, m2, n2);
    if (n1 == m2) {
        multiplyMatrices(A, B, C, m1, n1, n2);
        printf("Product of the matrices:\n");
        displayMatrix(C, m1, n2);
    } else {
        printf("Matrices cannot be multiplied due to incompatible dimensions.\n");
    }
    return 0;
}

