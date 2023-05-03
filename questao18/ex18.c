#include <stdio.h>
#include <stdlib.h>

void multiplica_matrizes(int *A, int *B, int *C, int linA, int colA, int colB) {
    for (int i = 0; i < linA; i++) {
        for (int j = 0; j < colB; j++) {
            int sum = 0;
            for (int k = 0; k < colA; k++) {
                sum += A[i*colA+k] * B[k*colB+j];
            }
            C[i*colB+j] = sum;
        }
    }
}

int main() {
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int C[2][4];

    int linA = 2, colA = 3, colB = 4;

    // transformando as matrizes em ponteiros de int
    int *pA = &A[0][0];
    int *pB = &B[0][0];
    int *pC = &C[0][0];

    multiplica_matrizes(pA, pB, pC, linA, colA, colB);

    printf("Matriz A:\n");
    for (int i = 0; i < linA; i++) {
        for (int j = 0; j < colA; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for (int i = 0; i < colA; i++) {
        for (int j = 0; j < colB; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz C:\n");
    for (int i = 0; i < linA; i++) {
        for (int j = 0; j < colB; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
